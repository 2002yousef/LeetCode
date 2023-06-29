#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
		for (int i = 0; i < nums.size(); i++)
		{
			int temp;
			while (nums[i] == 0)
			{
				temp = nums[i];
				nums.erase(nums.begin() + i);
				nums.push_back(temp);
			}
		}
    }
};

int main()
{
	Solution test1;
	vector<int> result1 = {0,0,0,1};
	test1.moveZeroes(result1);
	for (int i = 0; i < result1.size(); i++)
	{
		cout << result1[i] << endl;
	}

	return 0;
}