#pragma once
#include <string>
namespace wordsList
{
	struct Words final
	{
		std::string word_eng;
		std::string word_rus;
		Words* previous;
		Words* next;
		Words(const std::string engl, const std::string rus);
	};
};

