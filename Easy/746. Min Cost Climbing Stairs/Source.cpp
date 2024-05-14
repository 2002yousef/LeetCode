#include <iostream>;
#include <vector>;
using namespace std;

class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        cost.push_back(0);
        for (int i = cost.size() - 4; i >= 0; i--)
        {
            cost[i] += min(cost[i + 1], cost[i + 2]);
        }
        return min(cost[0], cost[1]);
    }
};

int main() {
    Solution test;
    vector<int> arr = { 1,100,1,1,1,100,1,1,100,1 };
    cout << test.minCostClimbingStairs(arr);
    return 0;
}