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
		int temp = abs(x);
		long long ret = 0;
		while (temp) {
			ret = ret * 10 + temp % 10;
			temp /= 10;
		}
		if (ret > std::numeric_limits<int>::max() || ret < std::numeric_limits<int>::min())
			return 0;
		if (x < 0)  return -ret;
		else		return ret;
	}
};