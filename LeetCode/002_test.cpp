#include "stdafx.h"
#include "CppUnitTest.h"
#include "002.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace LeetCode
{
	TEST_CLASS(UnitTest1)
	{
	public:
		TEST_METHOD(TestMethod1)
		{
			Solution s;
			ListNode* l1 = create({ 2, 4, 3 });
			ListNode* l2 = create({ 5, 6, 4 });
			ListNode* res = create({ 7, 0, 8 });
			Assert::IsTrue(isEqual(res, s.addTwoNumbers(l1, l2)));
		}
		TEST_METHOD(TestMethod2)
		{
			Solution s;
			ListNode* l1 = create({ 5 });
			ListNode* l2 = create({ 5 });
			ListNode* res = create({ 0, 1 });
			Assert::IsTrue(isEqual(res, s.addTwoNumbers(l1, l2)));
		}
		TEST_METHOD(TestMethod3)
		{
			Solution s;
			ListNode* l1 = create({ 1, 5 });
			ListNode* l2 = create({ 1, 5 });
			ListNode* res = create({ 2, 0, 1 });
			Assert::IsTrue(isEqual(res, s.addTwoNumbers(l1, l2)));
		}
		TEST_METHOD(TestMethod4)
		{
			Solution s;
			ListNode* l1 = create({ 5, 1 });
			ListNode* l2 = create({ 5 });
			ListNode* res = create({ 0, 2 });
			Assert::IsTrue(isEqual(res, s.addTwoNumbers(l1, l2)));
		}
		TEST_METHOD(TestMethod5)
		{
			Solution s;
			ListNode* l1 = create({ 9, 9 });
			ListNode* l2 = create({ 1 });
			ListNode* res = create({ 0, 0, 1 });
			Assert::IsTrue(isEqual(res, s.addTwoNumbers(l1, l2)));
		}
		TEST_METHOD(TestMethod6)
		{
			Solution s;
			ListNode* l1 = create({ 3, 7 });
			ListNode* l2 = create({ 9, 2 });
			ListNode* res = create({ 2, 0, 1 });
			Assert::IsTrue(isEqual(res, s.addTwoNumbers(l1, l2)));
		}
	};
}