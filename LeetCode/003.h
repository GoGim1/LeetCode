#pragma once
#include <string>
#include <unordered_map>
#include <algorithm>

using std::string;
using std::unordered_map;
using std::max;

class Solution {
public:
	int lengthOfLongestSubstring(string s) {
		/*int preIndex = 0;
		int length = 0;
		unordered_map<char, int> map;
		int i = 0;
		for (; i != s.size(); i++) {
			if (map.find(s[i]) == map.end()) 
				map.emplace(s[i], i);
			else {
				if ((i - preIndex) > length)
					length = i - preIndex;
				preIndex = max(map.find(s[i])->second + 1, preIndex);
				map.find(s[i])->second = i;
			}
		}
		if ((i - preIndex) > length)
			length = i - preIndex;
		return length;*/

		size_t ret = 0, start = 0;
		unordered_map<char, size_t> trace;
		for (size_t i = 0; i < s.size(); ++i) {
			auto found = trace.find(s[i]);
			if (found != trace.end() && found->second >= start) {
				ret = max(ret, i - start);
				start = found->second + 1;
			}
			trace[s[i]] = i;
		}
		return max(ret, s.size() - start);

	}
};