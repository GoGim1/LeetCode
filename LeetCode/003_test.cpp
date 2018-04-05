#include "stdafx.h"
#include "CppUnitTest.h"
#include "003.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace LeetCode
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(Test003_1)
		{
			Solution s;
			string str("sss");
			int answer = 1;
			Assert::IsTrue(s.lengthOfLongestSubstring(str) == answer);
		}
		TEST_METHOD(Test003_2)
		{
			Solution s;
			string str("s");
			int answer = 1;
			Assert::IsTrue(s.lengthOfLongestSubstring(str) == answer);
		}
		TEST_METHOD(Test003_3)
		{
			Solution s;
			string str("abcabcbb");
			int answer = 3;
			Assert::IsTrue(s.lengthOfLongestSubstring(str) == answer);
		}
		TEST_METHOD(Test003_4)
		{
			Solution s;
			string str("abba");
			int answer = 2;
			Assert::IsTrue(s.lengthOfLongestSubstring(str) == answer);
		}
	};
}