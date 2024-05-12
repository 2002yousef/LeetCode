#include <iostream>;
#include <vector>;
using namespace std;

class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int minCost = 0;
        for (int i = 0; i < cost.size(); i++)
        {
            if ((cost[i] < cost[i+1]) && (i < cost.size()))
            {
                minCost += cost[i];
            }
        }
        return minCost;
    }
};

int main() {
    Solution test;
    vector<int> arr = { 10,15,20 };
    cout << test.minCostClimbingStairs(arr);
    return 0;
}