#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    string tictactoe(vector<vector<int>>& moves) {
        vector<vector<int>> winningPos = { {0,1,2}, {3,4,5}, {6,7,8}, {0,3,6}, {1,4,7}, {2,5,8}, {0,4,8}, {2,4,6} }; // Possible winning positions
        bool flagA = true;
        int index;
        vector<string> positions(9, "");
        for (int i = 0; i < moves.size(); i++)
        {
            index = moves[i][0] * 3 + moves[i][1]; // Conversion from 2-d positons to 1-d positions
            if (flagA)
            {
                positions[index] = "A";
                flagA = false;
            }
            else {
                positions[index] = "B";
                flagA = true;
            }
        }

        for (int i = 0; i < 8; i++)
        {
            if ((positions[winningPos[i][0]] != "" && positions[winningPos[i][1]] != "" && positions[winningPos[i][2]] != "")
                && (positions[winningPos[i][0]] == positions[winningPos[i][1]]) && (positions[winningPos[i][0]] == positions[winningPos[i][2]]))
            {
                return positions[winningPos[i][0]];
            }
        }

        if (moves.size() == 9)
        {
            return "Draw";
        }
        else {
            return "Pending";
        }
    }
};

int main() {
    Solution test;
    vector<vector<int>> moves = { {0,0}, {2,0}, {1,1}, {2,1}, {2,2} };
    cout << test.tictactoe(moves);
    return 0;
}
