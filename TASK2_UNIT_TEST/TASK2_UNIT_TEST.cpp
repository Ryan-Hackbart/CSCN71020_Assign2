#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

extern "C" void setLength(int input, int* length);
extern "C" void setWidth(int input, int* width);

namespace TASK2UNITTEST
{
	TEST_CLASS(TASK2UNITTEST)
	{
	public:
		
		TEST_METHOD(SetLengthTest1) {
			// testing functionality of the setLength function 8 and length, expecting length = 8 
			int length = 0;
			setLength(8, &length);
			Assert::AreEqual(8, length);
		}

		TEST_METHOD(SetLengthTest2) {
			// testing functionality of the setLength function 99 and length, expecting length = 99
			int length = 0;
			setLength(99, &length);
			Assert::AreEqual(99, length);
		}

		TEST_METHOD(SetLengthTest3) {
			// testing functionality of the setLength function 1 and length, expecting length = 1 
			int length = 0;
			setLength(1, &length);
			Assert::AreEqual(1, length);
		}



		TEST_METHOD(SetWidthTest1) {
			// testing functionality of the GetArea function 5 and width, expecting width = 5 
			int width = 0;
			setWidth(5, &width);
			Assert::AreEqual(5, width);
		}

		TEST_METHOD(SetWidthTest2) {
			// testing functionality of the GetArea function 99 and width, expecting width = 99 
			int width = 0;
			setWidth(99, &width);
			Assert::AreEqual(99, width);
		}

		TEST_METHOD(SetWidthTest3) {
			// testing functionality of the GetArea function 1 and width, expecting width = 1 
			int width = 0;
			setWidth(1, &width);
			Assert::AreEqual(1, width);
		}
	};
}
