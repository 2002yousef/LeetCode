#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> record = {}; // Integer array to record scores
        int score = 0;
        for (int i = 0; i < operations.size(); i++)
        {
            if (operations[i] == "+") 
            {
                record.push_back(record[record.size() - 1] + record[record.size() - 2]); // Appends the sum of the last 2 elements in record array
            }
            else if (operations[i] == "D")
            {
                record.push_back(record[record.size() - 1] * 2); // Appends the double of the last element in record array
            }
            else if (operations[i] == "C") 
            {
                record.pop_back(); // Pops the last element in record array
            }
            else
            {
                record.push_back(stoi(operations[i])); // Adds a new element to records array
            }
        }
        
        // Calculating the score
        for (int i = 0; i < record.size(); i++)
        {
            score += record[i];
        }
        return score;
    }
};

// Test cases
int main()
{
    Solution test1;
    vector<string> arr1 = { "1","C" };
    int result1 = test1.calPoints(arr1);
    cout << result1;

    return 0;
}