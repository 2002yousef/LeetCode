#include <iostream>;
#include <algorithm>;
using namespace std;

class Solution {
public:
    int mySqrt(int x) {
        int l = 0, r = x / 2, ans;
        long long mid;
        if (x == 0 || x == 1)
        {
            return x;
        }

        while (l <= r)
        {
            mid = (l + r) / 2;
            if (mid * mid == x)
            {
                return mid;
            }

            if (mid * mid < x)
            {
                l = mid + 1;
                ans = mid;
            }
            else {
                r = mid - 1;
            }
        }
        return ans;
    }
};

int main() {
    Solution test;
    cout << test.mySqrt(8);
    return 0;
}