#include <iostream>;
#include <vector>;
#include <algorithm>;
#include <unordered_map>;
using namespace std;

class Solution {
public:
    vector<int> relocateMarbles(vector<int>& nums, vector<int>& moveFrom, vector<int>& moveTo) {
        unordered_map<int, bool> map;
        for (auto i : nums) {
            map[i] = true;
        }

        for (int i = 0; i < moveFrom.size(); i++) {
            map[moveFrom[i]] = false;
            map[moveTo[i]] = true;
        }
        vector<int> occupied;
        for (auto i : map) {
            if (i.second)
            {
                occupied.push_back(i.first);
            }
        }
        sort(occupied.begin(), occupied.end());
        return occupied;
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