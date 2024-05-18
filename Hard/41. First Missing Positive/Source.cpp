#include <iostream>;
#include <vector>;
#include <algorithm>;
using namespace std;

class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        nums.erase(unique(nums.begin(), nums.end()), nums.end());
        vector<int> positives = {};
        for (auto i : nums) {
            if (i > 0)
            {
                positives.push_back(i);
            }
        }
     

        for (int i = 0; i < positives.size(); i++)
        {
            if (positives[i] == i+1 )
            {
                continue;
            }
            else {
                return i + 1;
            }
        }
        return positives.size() + 1;
        
    }
};

int main() {
    Solution test;
    vector<int> arr = {0,1,1,2,2};
    cout << test.firstMissingPositive(arr);
    return 0;
}