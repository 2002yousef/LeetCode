#include <iostream>;
#include <algorithm>;
using namespace std;

class Solution {
public:
    int mySqrt(int x) {
        int ans;
        // Newton raphson method with one iteration
        ans = 0.5 * ((x - 1) + x / (x - 1));
        if (x / 4 == ans) {
            return ans;
        }
        else
        {
            ans = mySqrt(ans);
        }
    }
};

int main() {
    Solution test;
    cout << test.mySqrt(8);
    return 0;
}