#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
		if (nums[0] > nums[nums.size() -1])
		{
			reverse(nums.begin(), nums.end());
		}
		if (is_sorted(nums.begin(), nums.end()) )
		{
			return true;
		}
		return false;
    }
};

int main()
{
	Solution test1;
	vector<int> arr1 = { 1,3,2 };
	bool result1 = test1.isMonotonic(arr1);
	cout << result1;

	return 0;
}