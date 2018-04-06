#pragma once
#include <vector>

using std::vector;

class Solution {
public:
	double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
		auto p1 = nums1.begin(), p2 = nums2.begin();
		vector<int> temp;
		while (p1 != nums1.end() && p2 != nums2.end()) {
			if (*p1 >= *p2)
				temp.push_back(*p2++);
			else
				temp.push_back(*p1++);
		}
		if (p1 == nums1.end() && p2 != nums2.end())
			temp.insert(temp.end(), p2, nums2.end());
		if (p1 != nums1.end() && p2 == nums2.end())
			temp.insert(temp.end(), p1, nums1.end());
		auto size = temp.size();
		if (size % 2 == 0)  return (double)(temp.at(size / 2) + (double)temp.at(size / 2 - 1)) / 2;
		else				return temp.at(size / 2);
	}
};