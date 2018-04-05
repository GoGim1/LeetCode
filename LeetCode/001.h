#pragma once
#include <vector>
#include <unordered_map>

using std::vector;
using std::unordered_map;

class Solution {
public:
	//Brute Force
	//vector<int> twoSum(vector<int>& nums, int target) {
	//	auto size = nums.size();
	//	for (auto i = 0; i < size; i++)
	//		for (auto j = i + 1; j < size; j++) {
	//			if (nums[i] + nums[j] == target)
	//				return vector<int>{i, j};
	//		}
	//}

	vector<int> twoSum(vector<int>& nums, int target) {
		unordered_map<int, int> map;
		for (int i = 0; i != nums.size(); ++i) {
			if (map.find(target - nums[i]) != map.end()) 
				return{ map.find(target - nums[i])->second,i };
			map.emplace(nums[i], i);
		}
	}
};