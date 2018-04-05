#include "stdafx.h"
#include "CppUnitTest.h"
#include "001.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace LeetCode
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			// TODO: 在此输入测试代码
			Solution s;
			std::vector<int> v1{ 2, 7, 11, 15 };
			Assert::IsTrue((s.twoSum(v1, 9) == std::vector<int>{0, 1}));
		}

	};
}