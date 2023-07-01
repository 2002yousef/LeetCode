#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        if (arr.size() <= 2)
        {
            return true;
        }
        sort(arr.begin(), arr.end());
        for (int i = 1; i < arr.size() -1; i++)
        {
            if (arr[i+1] - arr[i] != arr[i] - arr[i-1])
            {
                return false;
            }
        }
        return true;

    }
};

int main()
{
    Solution test1;
    vector<int> arr1 = {1,5,3};
    bool result1 = test1.canMakeArithmeticProgression(arr1);
    cout << result1;

    return 0;
}