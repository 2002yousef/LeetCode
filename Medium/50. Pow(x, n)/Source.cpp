#include <iostream>;
#include <math.h>;
using namespace std;

class Solution {
public:
    double myPow(double x, int n) {
        if (n == 0 || x == 1)
        {
            return 1;
        }
        if (n == 1)
        {
            return x;
        }

        if (x == -1 && n%2==0)
        {
            return 1;
        }

        if (x == -1 && n % 2 != 0)
        {
            return -1;
        }

        int power = abs(n);
        double result = x;
        for (int i = 1; i < power; i++)
        {
            result *= x;
        }

        if (n > 0)
        {
            return result;
        }
        else {
            return 1 / result;
        }
    }
};

int main() {
    Solution test;
    cout << test.myPow(1.0000000000001, -2147483648);
    return 0;
}