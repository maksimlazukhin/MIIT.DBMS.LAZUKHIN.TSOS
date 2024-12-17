#include "Dictionary.h"
#include <sstream>

namespace wordsList 
{
	Dictionary::Dictionary() : head{ nullptr }, tail{ nullptr }
	{
	}

	Dictionary::Dictionary(std::initializer_list<std::string> list)
	{
		for (auto item = list.begin(); item != list.end(); item += 2)
		{
			this->PushBack(*item, *(item + 1));
		}
	}

	Dictionary::~Dictionary()
	{
		auto current = this->head;
		while (current != nullptr)
		{
			auto temp = current;
			current = current->next;
			delete temp;
		}
	}

	void Dictionary::PushBack(std::string engl, std::string rus)
	{
		auto words = new Words{ engl, rus };
		if (this->IsEmpty())
		{
			this->head = words;
			this->tail = words;
		}
		else
		{
			this->tail->next = words;
			words->previous = this->tail;
			this->tail = words;
		}
	}

	void Dictionary::Insert(const std::string engl, const std::string rus)
	{
		auto words = new Words{ engl, rus };
		if (this->IsEmpty())
		{
			this->head = words;
			this->tail = words;
		}
		else
		{
			auto current = this->head;
			auto words = new Words{ engl, rus };

			while (current != nullptr)
			{
				if (engl < current->word_eng)
				{
						auto words = new Words{ engl, rus };
						if (current->previous == nullptr)
						{
							words->next = this->head;
							this->head = words;
						}
						else
						{
							words->next = current;
							words->previous= current->previous->next;
							current->previous->next = words;
							current->previous = words;
						}
						break;
				}
				current = current->next;
			}
			if (current == nullptr)
			{
				this->tail->next = words;
				words->previous = this->tail;
				this->tail = words;
			}
		}
	}

	bool Dictionary::IsEmpty() const
	{
		return this->head == nullptr;
	}

	std::string Dictionary::ToString() const
	{
		std::stringstream buffer{};
		auto current = this->head;
		while (current != nullptr)
		{
			buffer << current->word_eng << "-" << current->word_rus << ";";
			current = current->next;
		}

		return buffer.str();
	}
	std::string Dictionary::TranslationToRus(const std::string engl)
	{
		auto current = this->head;

		while (current != nullptr)
		{
			if (engl == current->word_eng)
			{
				return current->word_rus;
				break;
			}
			current = current->next;
		}
		//return std::string();
	}
}
