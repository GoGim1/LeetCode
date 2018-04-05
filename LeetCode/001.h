#pragma once
#include <vector>

using std::vector;

class Solution {
public:
	vector<int> twoSum(vector<int>& nums, int target) {
		auto size = nums.size();
		for (auto i = 0; i < size; i++)
			for (auto j = i + 1; j < size; j++) {
				if (nums[i] + nums[j] == target)
					return vector<int>{i, j};
			}
	}
};