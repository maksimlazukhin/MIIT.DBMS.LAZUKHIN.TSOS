#pragma once
#include <initializer_list>

#include "Words.h"
namespace wordsList 
 {
	class Dictionary final
	{
	private:
		Words* head;
		Words* tail;
	public:
		Dictionary();
		Dictionary(std::initializer_list<std::string> list);
		~Dictionary();
		Dictionary(const Dictionary& other) = delete;
		Dictionary(Dictionary&& other) noexcept = delete;
		Dictionary& operator = (const Dictionary& other) = delete;
		Dictionary& operator = (Dictionary&& other) noexcept = delete;
		void PushBack(const std::string negl, const std::string rus);
		void Insert(const std::string engl, const std::string rus);
		bool IsEmpty() const;
		std::string ToString() const;
		std::string TranslationToRus(const std::string engl);
	};
}