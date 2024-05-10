#include <iostream>;
#include <vector>;
using namespace std;


class Solution {
public:
    int climbStairs(int n) {
        if (n == 0 || n == 1)
        {
            return 1;
        }
        vector<int> arr = { 1,1 };
        for (int i = 2; i <= n; i++)
        {
            arr.push_back(arr[i - 1] + arr[i - 2]);
        }
        return arr[n];
    }
};

int main() {
    Solution test1;
    cout << test1.climbStairs(5);
    return 0;
}