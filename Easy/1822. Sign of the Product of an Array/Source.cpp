#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int arraySign(vector<int>& nums) {
		int product = 1;
		for (int i = 0; i < nums.size(); i++)
		{
			if (nums[i] == 0)
			{
				return 0;
			}
			else if (nums[i] > 0)
			{
				product *= 1;
			}
			else
			{
				product *= -1;
			}
		}
		if (product > 0)
		{
			return 1;
		}
		else
		{
			return -1;
		}
    }
};

int main()
{
	Solution test1;
	vector<int> arr1 = { 9,72,34,29,-49,-22,-77,-17,-66,-75,-44,-30,-24 };
	int result1 = test1.arraySign(arr1);
	cout << result1;

	return 0;
}