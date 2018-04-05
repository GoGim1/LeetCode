#pragma once
struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
	//ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
	//	bool carryBit = false;
	//	ListNode* head = new ListNode(0);
	//	ListNode* pre = head;
	//	while (l1 != NULL && l2 != NULL) {
	//		ListNode* now = new ListNode(0);
	//		pre->next = now;
	//		pre = now;
	//		now->val = (l1->val + l2->val + carryBit) % 10;
	//		carryBit = (l1->val + l2->val + carryBit > 9) ? true : false;
	//		l1 = l1->next; l2 = l2->next;
	//	}
	//	if (l1 != NULL && l2 == NULL)
	//		while (l1 != NULL)
	//		{
	//			ListNode* now = new ListNode((l1->val + carryBit) % 10);
	//			carryBit = (l1->val + carryBit) > 9;
	//			pre->next = now;
	//			pre = now;
	//			l1 = l1->next;
	//		}
	//	if (l1 == NULL && l2 != NULL)
	//		while (l2 != NULL)
	//		{
	//			ListNode* now = new ListNode((l2->val + carryBit) % 10);
	//			carryBit = (l2->val + carryBit) > 9;
	//			pre->next = now;
	//			pre = now;
	//			l2= l2->next;
	//		}
	//	if (carryBit) {
	//		ListNode* now = new ListNode(1);
	//		pre->next = now;
	//		pre = now;
	//	}
	//	return head->next;
	//}

	//别人的做法
	ListNode *addTwoNumbers(ListNode *l1, ListNode *l2) {
		ListNode dummy(0), *tail = &dummy;
		for (div_t sum{ 0, 0 }; sum.quot || l1 || l2; tail = tail->next) {
			if (l1) { sum.quot += l1->val; l1 = l1->next; }
			if (l2) { sum.quot += l2->val; l2 = l2->next; }
			sum = div(sum.quot, 10);
			tail->next = new ListNode(sum.rem);
		}
		return dummy.next;
	}
};

ListNode* create(std::initializer_list<int> lst) {
	ListNode* head = new ListNode(*lst.begin());
	ListNode* pre = head;
	for (auto i = lst.begin()+1; i != lst.end(); i++) {
		ListNode* now = new ListNode(*i);
		pre->next = now;
		pre = now;
	}
	return head;
}

bool isEqual(ListNode* l1, ListNode* l2) {
	while (l1 != NULL && l2 != NULL){
		if (l1->val != l2->val)
			return false;
		l1 = l1->next;
		l2 = l2->next;
	}
	if (l1 != NULL && l2 == NULL || l1 == NULL && l2 != NULL)
		return false;
	return true;
}