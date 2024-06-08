#include <iostream>;
#include <vector>;
using namespace std;

class Solution {
public:
    int binaryGap(int n) {
        int max_gap = 0, gap =0;
        vector<int> arr;
        while (n > 0) {
            arr.push_back(n % 2);
            n /= 2;
        }

        for (int i = arr.size()-1; i >= 0; i--)
        {
            if (arr[i] == 0 || (arr[i - 1] == 1 && arr[i-1] != NULL))
            {
                gap++;
            }
            else if (arr[i] == 1) {
                max_gap = max(max_gap, gap);
                gap = 0;
            }
        }
        if (max_gap == 0)
        {
            return 0;
        }
        else {
            return max_gap;
        }
    }
};

int main() {
    Solution test;
    cout << test.binaryGap(5);
    return 0;
}