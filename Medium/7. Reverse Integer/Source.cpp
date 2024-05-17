#include <iostream>;
#include <string>;
using namespace std;

long long reverseNum(int x) {
    long long reverse_num = 0;
    while (x > 0) {
        reverse_num = reverse_num * 10 + x % 10;
        x /= 10;
    }
    if (reverse_num > 2147483648)
    {
        return 0;
    }
    else {
        return reverse_num;
    }
}

class Solution {
public:
    int reverse(int x) {
        if (x > 2147483648 || x < -2147483647) {
            return 0;
        }
        if (x < 0)
        {
            x *= -1;
            return reverseNum(x) * -1;
        }
        else {
            return reverseNum(x);
        }
    }
};

int main() {
    Solution test;
    cout << test.reverse(-2147483648);
    return 0;
}