#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    int minOperations(vector<string>& logs) {
        int depth = 0;
        for (int i = 0; i < logs.size(); i++)
        {
            if (logs[i] == "../")
            {
                if (depth > 0)
                {
                    depth--;
                }
            }
            else if (logs[i] == "./")
            {
                continue;
            }
            else
            {
                depth++;
            }
        }
        return depth;
    }
};

int main() {
    Solution test;
    vector<string> arr = { "d1/","d2/","../","d21/","./" };
    cout << test.minOperations(arr);
    return 0;
}
