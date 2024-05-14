#include <iostream>;
#include <vector>;
using namespace std;

class Solution {
public:
    int fib(int n) {
        if (n == 0)
        {
            return 0;
        }

        if (n ==1 )
        {
            return 1;
        }

        vector<int> arr = { 0,1 };
        for (int i = 2; i <= n; i++)
        {
            arr.push_back(arr[i - 1] + arr[i - 2]);
        }
        return arr[n];
    }
};

int main() {
    Solution test;
    cout << test.fib(5);
    return 0;
}