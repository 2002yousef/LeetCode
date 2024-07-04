#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int minDifference(vector<int>& nums) {
        if (nums.size() <= 4)
        {
            return 0;
        }

        sort(nums.begin(), nums.end());

        return min(
            min(nums[nums.size() - 1] - nums[3], nums[nums.size() - 2] - nums[2]),
            min(nums[nums.size() - 3] - nums[1], nums[nums.size() - 4] - nums[0])
        );

    }
};

int main() {
    Solution test;
    vector<int> arr = { 1,5,0,10,14 };
    cout << test.minDifference(arr);
    return 0;
}