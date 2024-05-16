#include <iostream>;
#include <vector>;
#include <algorithm>
using namespace std;

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        for (auto i : nums2)
        {
            nums1.push_back(i);
        }
        sort(nums1.begin(), nums1.end());
        int n = nums1.size();
        if (n%2 == 0)
        {
            double n1 = nums1[(n / 2) -1 ];
            double n2 = nums1[(n / 2)];
            return (n1 + n2) / 2;
        }
        else {
            return nums1[(n+1)/2 -1];
        }
        
    }
};

int main() {
    Solution test;
    vector<int> arr1 = { 1,2 };
    vector<int> arr2 = { 3};
    cout << test.findMedianSortedArrays(arr1, arr2);
    return 0;
}