#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
using namespace std;

class Solution {
public:
    int findTheWinner(int n, int k) {
        vector<int> arr(n);
        iota(arr.begin(), arr.end(), 1);
        return Josh(arr, k-1, 0);
    }

    int Josh(vector<int> arr, int k, int index) {
        if (arr.size() == 1)
        {
            return arr[0];
        }

        index = ((index + k) % arr.size());
        arr.erase(arr.begin() + index);

        return Josh(arr, k, index);
    }

};

int main()
{
    Solution test;
    cout << test.findTheWinner(5, 2);
    return 0;
}