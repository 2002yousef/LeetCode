#include <iostream>;
#include <unordered_map>;
#include <vector>;
#include <algorithm>;
using namespace std;

class Solution {
public:
    long long maximumImportance(int n, vector<vector<int>>& roads) {
        long long sum=0;
        int importance = n;
        unordered_map<int, int> cities;
        vector<long long> degrees = {};

        // Creating the hashmap
        for (int i = 0; i < roads.size(); i++)
        {
            cities[roads[i][0]]++;
            cities[roads[i][1]]++;
        }

        // Getting connections into an array to sort it descendingly
        for (auto connection : cities) {
            degrees.push_back(connection.second);
        }

        sort(degrees.begin(), degrees.end(), greater<int>());

        // Maximum importance calculation
        for (int i = 0; i < n; i++)
        {
            sum = sum + degrees[i] * importance;
            importance--;
        }

        return sum;
    }
};

int main() {
    Solution test;
    vector<vector<int>> roads = { {0,1} ,{1,2},{2,3},{0,2},{1,3},{2,4} };
    int num_cities = 5;
    cout << test.maximumImportance(num_cities, roads);
    return 0;
}