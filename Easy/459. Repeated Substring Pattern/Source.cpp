#include <iostream>
#include <algorithm>
using namespace std;

class Solution {
public:
    bool repeatedSubstringPattern(string s) {
		return ((s + s).find(s, 1) != s.length());
    }
};

int main()
{
	Solution test1;
	bool result1 = test1.repeatedSubstringPattern("ababba");
	cout << result1;

	return 0;
}