#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        if (digits[digits.size() - 1] != 9)
        {
            digits[digits.size() - 1] += 1;
            return digits;
        }
        else
        {
            // If the array ends with 9, when we add 1 it should become 10
            for (int i = digits.size() - 1; i >= 0; i--)
            {
                if (digits[i] == 9)
                {
                    digits[i] = 0; // changing every 9 to 0
                }
                else
                {
                    digits[i] += 1;
                    return digits;
                }
            }
        }
        // if all digits are 9 then 1 is set at the beginning of the array and a 0 is pushed at the end
        digits[0] = 1;
        digits.push_back(0);
        return digits;
    }
};

// Test cases
int main()
{
    Solution test1;
    vector<int> result1 = { 8,9,9,9 };
    result1 = test1.plusOne(result1);
    for (int i = 0; i < result1.size(); i++)
    {
        cout << result1[i] << endl;
    }

    return 0;
}