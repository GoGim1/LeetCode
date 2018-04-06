#include "stdafx.h"
#include "CppUnitTest.h"
#include "004.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace LeetCode
{
	TEST_CLASS(UnitTest1)
	{
	public:
		TEST_METHOD(Test009_1)
		{
			Solution s;
			std::vector<int> v1{ 1, 3 };
			std::vector<int> v2{ 2 };
			Assert::IsTrue((s.findMedianSortedArrays(v1, v2) == 2));
		}
		TEST_METHOD(Test009_2)
		{
			Solution s;
			std::vector<int> v1{ 1, 3 };
			std::vector<int> v2{ 2, 4 };
			Assert::IsTrue((s.findMedianSortedArrays(v1, v2) == 2.5));
		}
		TEST_METHOD(Test009_3)
		{
			Solution s;
			std::vector<int> v1{  };
			std::vector<int> v2{ 1 };
			Assert::IsTrue((s.findMedianSortedArrays(v1, v2) == 1));
		}
	};
}