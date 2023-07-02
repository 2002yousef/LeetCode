#include <iostream>
using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) {
		// Removing any empty spaces at the end of the string
		while (s[s.length() - 1] == ' ')
		{
			s.erase(s.length() - 1);
		}
		int i; // Declared outside the for loop to be used outside the loop
		for (i = s.length() -1; i >= 0; i--)
		{
			if (s[i] == ' ')
			{
				break;
			}
		}
		return s.length() -1 - i;
    }
};

// Test cases
int main()
{
	Solution test1;
	int result1 = test1.lengthOfLastWord("   fly me   to   the moon");
	cout << result1;

	return 0;
}