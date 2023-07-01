#include <string>
#include <iostream>
using namespace std;

class Solution {
public:
    int romanToInt(string s) {
        int n = int(s.size());
        int result = 0;

        for (int i = 0; i < n; i++) {
            switch (s[i]) {
            case 'I':
                result += 1;
                break;

            case 'V':
                result += 5;
                break;

            case 'X':
                result += 10;
                break;

            case 'L':
                result += 50;
                break;

            case 'C':
                result += 100;
                break;

            case 'D':
                result += 500;
                break;

            case 'M':
                result += 1000;
                break;
            }

            if (s[i] == 'I' && (s[i + 1] == 'V' || s[i + 1] == 'X'))
            {
                result -= 1 + 1;
            }

            if (s[i] == 'X' && (s[i + 1] == 'L' || s[i + 1] == 'C'))
            {
                result -= 10 + 10;
            }

            if (s[i] == 'C' && (s[i + 1] == 'D' || s[i + 1] == 'M'))
            {
                result -= 100 + 100;
            }

        }
        return result;
    }
};

int main()
{
    Solution test1;
    int result1 = test1.romanToInt("MCMXCIV");
    cout << result1;
    return 0;
}