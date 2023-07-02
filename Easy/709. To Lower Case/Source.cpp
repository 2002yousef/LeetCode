#include <iostream>
#include <algorithm>
using namespace std;

class Solution {
public:
    string toLowerCase(string s) {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        return s;
    }
};

int main()
{
    Solution test1;
    string result1 = test1.toLowerCase("HELLO WORLD");
    cout << result1;

    return 0;
}