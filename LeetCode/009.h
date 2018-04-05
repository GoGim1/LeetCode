#pragma once
#include <string>
using std::string;
using std::to_string;

class Solution {
public:
	bool isPalindrome(int x) {
		string str = to_string(x);
		for (auto b =  str.begin(), e = str.end()-1; b < e; b++, e--)
			if (*b != *e)
				return false;
		return true;
	}
};