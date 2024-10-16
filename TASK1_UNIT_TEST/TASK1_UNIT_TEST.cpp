#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

extern "C" int getPerimeter(int *length, int *width);
extern "C" int getArea(int *length, int *width);

namespace TASK1UNITTEST
{
	TEST_CLASS(TASK1UNITTEST)
	{
	public:
		
		TEST_METHOD(GetPerimiterTest1) {
			// testing functionality of the GetPerimeter function 8 and 9, expecting 34
			int Result = getPerimeter(8, 9);
			Assert::AreEqual(34, Result);

		}

		TEST_METHOD(GetAreaTest1) {
			// testing functionality of the GetArea function 8 and 9, expecting 72
			int Result = getArea(8, 9);
			Assert::AreEqual(72, Result);

		}
	};
}
