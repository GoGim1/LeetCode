#pragma once
#include <vector>
using std::vector;
#include <unordered_map>
using std::unordered_map;

class Solution {
public:
	vector<int> twoSum(vector<int>& nums, int target) {
		for (auto i = nums.begin(); i < nums.end(); i++)
			for (auto j = i + 1; j < nums.end(); j++) {
				if (*i + *j == target)
					return vector<int>{i, j};
				return vector<int>();
			}
	}
};