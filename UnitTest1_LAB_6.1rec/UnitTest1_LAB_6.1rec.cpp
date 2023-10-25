#include "pch.h"
#include "CppUnitTest.h"
#include "../LAB_6.1rec/lab_6.1rec.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1LAB61rec
{
	TEST_CLASS(UnitTest1LAB61rec)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int b[] = { 1, 2, 3, 4, 5 };
			int result = Number(b, 5, 0, 0);
			Assert::AreEqual(3, result);
		}
	};
}
