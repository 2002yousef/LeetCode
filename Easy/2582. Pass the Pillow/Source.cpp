#include <iostream>
using namespace std;

class Solution {
public:
    int passThePillow(int n, int time) {
        int m = (time - 1) % (2 * n - 2);
        return m < n-1 ? m + 2 : 2 * n - 2 - m;
    }
};

int main() {
    Solution test;
    cout << test.passThePillow(3, 2);
    return 0;
}