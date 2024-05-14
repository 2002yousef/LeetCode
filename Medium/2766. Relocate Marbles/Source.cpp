#include <iostream>;
#include <vector>;
#include <algorithm>;
#include <unordered_map>;
using namespace std;

class Solution {
public:
    vector<int> relocateMarbles(vector<int>& nums, vector<int>& moveFrom, vector<int>& moveTo) {
        unordered_map<int, int> moveMap;
        for (int i = 0; i < moveFrom.size(); i++) {
            moveMap[moveFrom[i]] = moveTo[i]; // Store moveFrom -> moveTo mapping
        }

        vector<int> relocatedNums;
        // Perform relocations using the moveMap
        for (int i = 0; i < nums.size(); i++) {
            if (moveMap.find(nums[i]) != moveMap.end()) {
                relocatedNums.push_back(moveMap[nums[i]]);
            }
            else {
                relocatedNums.push_back(nums[i]);
            }
        }

        // Sort the relocatedNums vector
        sort(relocatedNums.begin(), relocatedNums.end());
        // Remove duplicates
        relocatedNums.erase(unique(relocatedNums.begin(), relocatedNums.end()), relocatedNums.end());

        return relocatedNums; // Return the vector with unique values
    }
};




int main() {
    Solution test;
    vector<int> nums = { 1,6,7,8};
    vector<int> moveFrom = { 1,7,2};
    vector<int> moveTo = { 2,9,5};
    vector<int> result = test.relocateMarbles(nums, moveFrom, moveTo);
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }
    return 0;
}