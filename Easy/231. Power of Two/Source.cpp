#include <iostream>
using namespace std;

class Solution {
public:
    bool isPowerOfTwo(int n) {
        if (n > 0) {
            return !(n & (n - 1));
        }
        return 0;
    }
};

int main() {
    Solution test;
    cout << test.isPowerOfTwo(7);
    return 0;
}