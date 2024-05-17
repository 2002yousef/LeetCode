#include <iostream>;
#include <string>;
#include <algorithm>
using namespace std;

class Solution {
public:
    bool checkString(string s) {
        string new_string = s;
        sort(new_string.begin(), new_string.end());

        if (new_string == s)
        {
            return true;
        }
        return false;
    }
};

int main() {
    Solution test;
    cout << test.checkString("abab");
    return 0;
}