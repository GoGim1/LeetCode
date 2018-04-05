#pragma once
#include <string>
using std::string;
using std::to_string;

class Solution {
public:
	bool isPalindrome(int x) {
		//not allowed by the problem 
		//string str = to_string(x);
		//for (auto b =  str.begin(), e = str.end()-1; b < e; b++, e--)
		//	if (*b != *e)
		//		return false;
		//return true;
	
		if (x < 0 || (x % 10 == 0 && x != 0)) {
			return false;
		}
		int revertedNumber = 0;
		while (x > revertedNumber) {	
			revertedNumber = revertedNumber * 10 + x % 10;
			x /= 10;
		}
		return x == revertedNumber || x == revertedNumber / 10;
	}
};