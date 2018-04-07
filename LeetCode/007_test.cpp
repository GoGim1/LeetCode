#include "stdafx.h"
#include "CppUnitTest.h"
#include "007.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace LeetCode
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(Test007_1)
		{
			Solution s;
			Assert::IsTrue((s.reverse(1534236469) == 0));
		}

		TEST_METHOD(Test007_2)
		{
			Solution s;
			Assert::IsTrue((s.reverse(123) == 321));
		}
	};
}