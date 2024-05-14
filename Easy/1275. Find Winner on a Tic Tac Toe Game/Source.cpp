#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    string tictactoe(vector<vector<int>>& moves) {

        vector<char> pos = { '.', '.' , '.' ,'.' ,'.' ,'.' ,'.' ,'.' ,'.' };
        for (int i = 0; i < moves.size(); i++)
        {
            if (i%2 == 0)
            {
                if (moves[i][0] == 0 && moves[i][1] == 0)
                {
                    pos[0] = 'A';
                }
                else if (moves[i][0] == 0 && moves[i][1] == 1)
                {
                    pos[1] = 'A';
                }
                else if (moves[i][0] == 0 && moves[i][1] == 2)
                {
                    pos[2] = 'A';
                }
                else if (moves[i][0] == 1 && moves[i][1] == 0)
                {
                    pos[3] = 'A';
                }
                else if (moves[i][0] == 1 && moves[i][1] == 1)
                {
                    pos[4] = 'A';
                }
                else if (moves[i][0] == 1 && moves[i][1] == 2)
                {
                    pos[5] = 'A';
                }
                else if (moves[i][0] == 2 && moves[i][1] == 0)
                {
                    pos[6] = 'A';
                }
                else if (moves[i][0] == 2 && moves[i][1] == 1)
                {
                    pos[7] = 'A';
                }
                else if (moves[i][0] == 2 && moves[i][1] == 2)
                {
                    pos[8] = 'A';
                }
            }
            else
            {
                if (moves[i][0] == 0 && moves[i][1] == 0)
                {
                    pos[0] = 'B';
                }
                else if (moves[i][0] == 0 && moves[i][1] == 1)
                {
                    pos[1] = 'B';
                }
                else if (moves[i][0] == 0 && moves[i][1] == 2)
                {
                    pos[2] = 'B';
                }
                else if (moves[i][0] == 1 && moves[i][1] == 0)
                {
                    pos[3] = 'B';
                }
                else if (moves[i][0] == 1 && moves[i][1] == 1)
                {
                    pos[4] = 'B';
                }
                else if (moves[i][0] == 1 && moves[i][1] == 2)
                {
                    pos[5] = 'B';
                }
                else if (moves[i][0] == 2 && moves[i][1] == 0)
                {
                    pos[6] = 'B';
                }
                else if (moves[i][0] == 2 && moves[i][1] == 1)
                {
                    pos[7] = 'B';
                }
                else if (moves[i][0] == 2 && moves[i][1] == 2)
                {
                    pos[8] = 'B';
                }
            }
        }

        if ((pos[0] == pos[1] == pos[2]) || (pos[3] == pos[4] == pos[5]) || (pos[6] == pos[7] == pos[8]) || (pos[0] == pos[3] == pos[6]) || (pos[1] == pos[4] == pos[7]) || (pos[2] == pos[5] == pos[8]) || (pos[0] == pos[4] == pos[8]) || (pos[2] == pos[4] == pos[6]))
        {
            return "There is a win";
        }
        else
        {
            return "Pending";
        }
    }

       /* vector<vector<int>> xmoves;
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
    }*/

    
};

int main() {
    Solution test1;
    vector<vector<int>> arr1 = { {0,0}, {1,1}, {0,1}, {0,2},  {1,0}, {2,0} };
    string result1 = test1.tictactoe(arr1);
    cout << result1;

    return 0;
}