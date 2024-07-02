#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        int numA =0, numB=0;
        vector<int> result;
        while (numA< nums1.size() && numB < nums2.size())
        {
            if (nums1[numA] < nums2[numB])
            {
                numA++;
            }
            else if (nums2[numB] < nums1[numA])
            {
                numB++;
            }
            else
            {
                result.push_back(nums1[numA]);
                numA++;
                numB++;
            }
        }
        return result;
    }
};

int main() {
    Solution test;
    vector<int> nums1 = { 4,9,5 } , nums2= { 9,4,9,8,4 }, result;
    result = test.intersect(nums1, nums2);
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }
    return 0;
}