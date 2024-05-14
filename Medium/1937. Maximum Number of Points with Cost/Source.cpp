#include <iostream>;
#include <vector>;
using namespace std;

class Solution {
public:
    long long maxPoints(vector<vector<int>>& points) {
        int result = 0, maximum =0;
        /*if (points.size() == 0)
        {
            return 0;
        }
        int max, result = 0, previousColumn, currentColumn;
        for (int r = 0; r < points.size(); r++)
        {
            max = 0;
            for (int c = 0; c < points[r].size(); c++)
            {
                if (points[r][c] > max)
                {
                    max = points[r][c];
                    currentColumn = c;
                }
            }

            if (r == 0)
            {
                result += max;
            }
            else {
                result = result + max - abs(previousColumn - currentColumn);
            }
            previousColumn = currentColumn;
        }*/
        for (int i = 0; i < points.size() - 1; i++)
        {
            for (int j = 0; j < points[i].size() -1; j++)
            {
                for (int k = 0; k < points[i].size(); k++)
                {
                    maximum = max(points[i][j] + points[i + 1][k] - abs(j - k), points[i][j] + points[i+1][k]);
                }
            }
            result += maximum;
        }
        return result;
    }
};

int main() {
    Solution test1;
    vector<vector<int>> arr = { {0, 3, 0, 4, 2}, {5, 4, 2, 4, 1}, {5, 0, 0, 5, 1}, {2, 0, 1, 0, 3} };
    long long result = test1.maxPoints(arr);
    cout << result;
    return 0;
};