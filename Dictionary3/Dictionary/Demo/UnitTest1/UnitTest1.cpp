#include "pch.h"
#include "CppUnitTest.h"
#include "../Dictionary/Dictionary.h"  

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
namespace wordsList 
{
	namespace DictionaryLinkedListTest
	{
		TEST_CLASS(DictionaryLinkedListTest)
		{
		public:

			TEST_METHOD(ToString_Valid_Success)
			{
				//arrange
				Dictionary list{ "table","стол","window","окно" };

				std::string expected{ "table-стол;window-окно;" };

				//act
				auto actual = list.ToString();

				//assert
				Assert::AreEqual(expected, actual);
			}
		};
	}
}
 