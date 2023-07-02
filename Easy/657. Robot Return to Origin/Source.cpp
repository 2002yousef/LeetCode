#include <iostream>
using namespace std;

class Solution {
public:
    bool judgeCircle(string moves) {
		// If length is an odd number that means there is move without its opposite
		if (moves.length() % 2 != 0)
		{
			return false;
		}

		int DirX = 0; // Left or right direction
		int DirY = 0; // Up or down direction
		for (int i = 0; i < moves.length(); i++)
		{
			switch (moves[i])
			{
			case 'U': // Up
				DirX++;
				break;
			case 'D': // Down
				DirX--;
				break;
			case 'R': // Right
				DirY++;
				break;
			case 'L': // Left
				DirY--;
				break;
			default:
				break;
			}
		}
		if (DirX == 0 && DirY == 0 ) // Origin check
		{
			return true;
		}
		return false;
    }
};

int main()
{
	Solution test1;
	bool result1 = test1.judgeCircle("UDR");
	cout << result1;

	return 0;
}