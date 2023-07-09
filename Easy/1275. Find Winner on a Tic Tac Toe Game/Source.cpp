#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    string tictactoe(vector<vector<int>>& moves) {

        vector<vector<int>> xmoves;
        vector<vector<int>> omoves;
        for (int i = 0; i < moves.size(); i++)
        {
            if (i%2 == 0)
            {
                xmoves.push_back(moves[i]);
            }
            else
            {
                omoves.push_back(moves[i]);
            }
        }
        if (xmoves.size() == 3)
        {
            if (horizontalCheck(xmoves) || verticalCheck(xmoves) || diagonalCheck(xmoves) || reverseDiagonalCheck(xmoves))
            {
                return "A";
            }
        }

        if (omoves.size() == 3)
        {
            if (horizontalCheck(omoves) || verticalCheck(omoves) || diagonalCheck(omoves) || reverseDiagonalCheck(omoves) )
            {
                return "B";
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
    bool horizontalCheck(vector<vector<int>> move) {
        if (move[0][0] == move[1][0] && move[0][0] == move[2][0])
        {
            return true;
        }
        return false;
    }

    bool verticalCheck(vector<vector<int>> move) {
        if (move[0][1] == move[1][1] && move[0][1] == move[2][1])
        {
            return true;
        }
        return false;
    }

    bool diagonalCheck(vector<vector<int>> move) {
        if ((move[0][0] == move[0][1]) && (move[1][0] == move[1][1]) && (move[2][0] == move[2][1]))
        {
            return true;
        }
        return false;
    }

    bool reverseDiagonalCheck(vector<vector<int>> move) {
        if ((move[0][0] + move[0][1] == 2) && (move[1][0] + move[1][1] == 2) && (move[2][0] + move[2][1] == 2))
        {
            return true;
        }
        return false;
    }

    
};

int main() {
    Solution test1;
    vector<vector<int>> arr1 = { {1,2}, {1,0}, {0,0}, {0,1},  {2,1} };
    string result1 = test1.tictactoe(arr1);
    cout << result1;

    return 0;
}