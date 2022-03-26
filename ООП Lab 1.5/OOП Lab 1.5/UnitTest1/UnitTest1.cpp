#include "pch.h"
#include "CppUnitTest.h"
#include "../OOП Lab 1.5/Pair.h"
#include "../OOП Lab 1.5/Pair.cpp"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Pair a;
			int c = a.Suma1(2, 4);
			Assert::AreEqual(c, 6);

		}
	};
}
