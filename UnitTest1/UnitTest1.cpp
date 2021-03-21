#include "pch.h"
#include "CppUnitTest.h"
#include "../Pair.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Pair A(2, 2);
			Pair B(2, 3);
			bool test = A == B;
			Assert::AreEqual(test, false);
		}
	};
}
