#include <iostream>
using namespace std;

class Solution {
public:
    string mergeAlternately(string word1, string word2) {
		string newStr;
		int i; // i is not defined in the for loop decleration to get its last value if any of the strings is longer than the other
		for (i = 0; i < min(word1.length(), word2.length()); i++)
		{
			newStr += word1[i];
			newStr += word2[i];
		}

		// if word1 is longer than word2
		if (word1.length() > i) 
		{
			for (int j = i; j < word1.length(); j++)
			{
				newStr += word1[j];
			}
		}

		// if word2 is longer than word1
		else if (word2.length() > i)
		{
			for (int j = i; j < word2.length(); j++)
			{
				newStr += word2[j];
			}
		}
		return newStr;
    }
};

// Test cases
int main()
{
	Solution test1;
	string result1 = test1.mergeAlternately("abc", "pqr");
	cout << result1;

	return 0;
}