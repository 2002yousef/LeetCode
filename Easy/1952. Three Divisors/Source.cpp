#include <iostream>;
using namespace std;

class Solution {
public:
    bool isThree(int n) {
        if (n < 4)
        {
            return false;
        }
        int divisors = 0;
        for (int i = 1; i < (n / 2) + 1; i++)
        {
            if (n % i == 0)
            {
                divisors += 1;
            }
        }
        divisors += 1;
        if (divisors == 3)
        {
            return true;
        }
        return false;
    }
};

int main() {
    Solution test;
    cout << test.isThree(9);
    return 0;
}