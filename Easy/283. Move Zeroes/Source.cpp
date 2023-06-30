#include <iostream>
#include <vector>
#include <queue>

using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
		queue<int> zeroQueue;
		queue<int> nonZeroQueue;

		for (int i = 0; i < nums.size(); i++)
		{
			if (nums[i] == 0)
			{
				zeroQueue.push(nums[i]);
			}
			else
			{
				nonZeroQueue.push(nums[i]);
			}
		}

		for (int i = 0; i < nums.size(); i++)
		{
			if (!nonZeroQueue.empty())
			{
				nums[i] = nonZeroQueue.front();
				nonZeroQueue.pop();
			}
			else
			{
				nums[i] = zeroQueue.front();
				zeroQueue.pop();
			}
		}
    }
};

int main()
{
	Solution test1;
	vector<int> result1 = {1,4,3,5,2,0};
	test1.moveZeroes(result1);
	for (int i = 0; i < result1.size(); i++)
	{
		cout << result1[i] << endl;
	}

	return 0;
}