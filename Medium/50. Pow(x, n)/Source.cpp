#include <iostream>;
using namespace std;

class Solution {
public:
    double myPow(double x, int n) {
        return pow(x, n);
    }
};

int main() {
    Solution test;
    cout << test.myPow(2, -2);
    return 0;
}