#pragma once
#include <string>
#include <cmath>
#include <limits>

using std::abs;
using std::string;
using std::to_string;

class Solution {
public:
	int reverse(int x) {
		long long ret = 0;
		while (x) {
			ret = ret * 10 + x % 10;
			x /= 10;
		}
		if (ret > std::numeric_limits<int>::max() || ret < std::numeric_limits<int>::min())
			return 0;
		else		
			return ret;
	}
};