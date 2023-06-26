#include <iostream>
using namespace std;

class Solution {
public:
    int minimumRecolors(string blocks, int k) 
    {
        int countW = count(blocks.begin(), blocks.begin() + k, 'W'); // Counting how many W's in the first k elements
        int ans = countW;
        for (int i = k; i < blocks.length(); i++) // Starting from the kth element
        {
            // If an element after the kth element is W, countW is incremented
            if (blocks[i] == 'W')
            {
                countW++;
            }

            // If an element before the kth element is W, countW is decremented since it is already counted 
            if (blocks[i-k] == 'W')
            {
                countW--;
            }
            ans = min(ans, countW); // ans takes the minimum answer between its previous value or countW
        }

        return ans;
        
    }
};

// Test cases (1)
int main() {
    Solution test1;
    int result1 = test1.minimumRecolors("WBBBWWBBWWWWWWWW", 3);
    cout << result1;
    return 0;
}