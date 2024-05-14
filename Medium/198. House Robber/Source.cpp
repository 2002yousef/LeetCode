#include <iostream>;
#include <vector>;
using namespace std;

class Solution {
public:
    int rob(vector<int>& nums) {
        int rob1 = 0, rob2 = 0;
        int temp;
        for (int i = 0; i < nums.size(); i++)
        {
            temp = max(nums[i] + rob1, rob2);
            rob1 = rob2;
            rob2 = temp;
        }
        return rob2;
    }
};

int main() {
    Solution test;
    vector<int> arr = { 2,1,1,2};
    cout << test.rob(arr);
    return 0;
}