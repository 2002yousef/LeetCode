#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        int current_time = 0, total_waiting_time = 0, waiting_time;

        for (auto customer : customers)
        {
            if (current_time < customer[0])
            {
                current_time = customer[0];
            }
            current_time += customer[1];
            waiting_time = current_time - customer[0];
            total_waiting_time += waiting_time;
        }

        return total_waiting_time / customers.size();
    }
};

int main()
{
    Solution test;
    vector<vector<int>> customers = { {1,2}, {2,5}, {4,3} };
    cout << test.averageWaitingTime(customers);
    return 0;
}