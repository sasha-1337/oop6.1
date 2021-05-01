#include "pch.h"
#include "CppUnitTest.h"
#include "D:\Student\oop6.1\oop6.1\Array.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest61
{
	TEST_CLASS(UnitTest61)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Array mas1(2);
			mas1[0] = 1; mas1[1] = 2;
			int t = mas1.Norma();
			Assert::AreEqual(t, 1);
		}
	};
}
