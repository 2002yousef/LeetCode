#include <iostream>;
#include <vector>;
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int maximumArea = 0;
        int left = 0;
        int right = height.size() - 1;

        while (left < right)
        {
            int width = right - left;
            int currentHeight = min(height[left], height[right]);
            int currentArea = width * currentHeight;
            maximumArea = max(maximumArea, currentArea);

            if (height[left] < height[right]) {
                left++;
            }
            else {
                right--;
            }
        }
        return maximumArea;
    }
};

int main() {
    Solution test;
    vector<int> arr = { 1,8,6,2,5,4,8,3,7 };
    cout << test.maxArea(arr);
    return 0;
}