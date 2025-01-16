#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    string convertToTitle(int columnNumber) {
        string result = "";

        while (columnNumber > 0) {
            columnNumber--;
            int remainder = columnNumber % 26;
            result += ('A' + remainder);
            columnNumber /= 26;
        }

        reverse(result.begin(), result.end());
        return result;
    }                  
};                     
                       
int main() {
    Solution test;
    cout << test.convertToTitle(27);
    return 0;
}       