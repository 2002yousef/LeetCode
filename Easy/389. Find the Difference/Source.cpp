#include <iostream>
using namespace std;

class Solution {
public:
    char findTheDifference(string s, string t) {
        char c = 0;
        for (int i = 0; i < s.length(); i++)
        {
            c ^= s[i]; // ^ -> bitwise operator XOR
        }
        for (int i = 0; i < t.length(); i++)
        {
            c ^= t[i]; // This will return the added random letter
        }
        return c;
    }
};

// Test cases
int main()
{
    Solution test1;
    char result1 = test1.findTheDifference("", "d");
    cout << result1;

    return 0;
}