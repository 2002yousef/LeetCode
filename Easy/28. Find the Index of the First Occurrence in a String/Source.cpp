#include <iostream>
using namespace std;

class Solution {
public:
    int strStr(string haystack, string needle) {
        return haystack.find(needle); // Using string method find() to return the first occurance of the substring
    }
};

// Test cases
int main()
{
    Solution test1;
    int result1 = test1.strStr("butsad", "bad");
    cout << result1;

    return 0;
}