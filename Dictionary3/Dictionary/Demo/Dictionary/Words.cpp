#include "Words.h"
namespace wordsList
{
	Words::Words(const std::string engl, const std::string rus) : word_eng{engl}, word_rus{ rus },previous{nullptr},next{nullptr}
	{
	}
}