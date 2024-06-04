#include <iostream>;
#include <vector>;
using namespace std;

class Solution {
public:
    int maxOperations(vector<int>& nums) {
        int currentResult = nums[0] + nums[1];
        int result = currentResult;
        int count = 0;
        while (nums.size() >= 2) {
            result = nums[0] + nums[1];
            if (result == currentResult)
            {
                count++;
            }
            else {
                return count;
            }

            nums.erase(nums.begin());
            nums.erase(nums.begin());
        }
        return count;
    }
};
int main() {
    Solution test;
    vector<int> arr = { 3,2,6,1,4 };
    cout << test.maxOperations(arr);
    return 0;
}