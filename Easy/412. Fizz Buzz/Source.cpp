#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> ans(n);
        for (int i = 1; i <= n; i++)
        {
            string str;
            if (i % 3 == 0) str += "Fizz";
            if (i % 5 == 0) str += "Buzz";
            ans[i - 1] = str.empty() ? to_string(i) : str;
        }
        return ans;
    }
};

int main() {
    Solution test;
    vector<string> ans = test.fizzBuzz(15);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i]<< endl;
    }
    return 0;
}