#include "stdafx.h"
#include "CppUnitTest.h"
#include "009.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace LeetCode
{
	TEST_CLASS(UnitTest1)
	{
	public:
		TEST_METHOD(TestMethod1)
		{
			Solution s;
			int TestNum = 123;
			Assert::IsTrue(s.isPalindrome(TestNum) == false);
		}
		TEST_METHOD(TestMethod2)
		{
			Solution s;
			int TestNum = 121;
			Assert::IsTrue(s.isPalindrome(TestNum) == true);
		}
		TEST_METHOD(TestMethod3)
		{
			Solution s;
			int TestNum = 1;
			Assert::IsTrue(s.isPalindrome(TestNum) == true);
		}
		TEST_METHOD(TestMethod4)
		{
			Solution s;
			int TestNum = 1221;
			Assert::IsTrue(s.isPalindrome(TestNum) == true);
		}
	};
}