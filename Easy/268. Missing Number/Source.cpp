#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        double sum1 = (n * (n + 1)) / 2;
        int sum2 = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            sum2 += nums[i];
        }

        return sum1 - sum2;
    }
};

int main() {
    Solution test;
    vector<int> arr = { 1,2,3 };
    cout << test.missingNumber(arr);
    return 0;
}