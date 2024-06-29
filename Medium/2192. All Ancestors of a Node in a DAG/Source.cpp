#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <set>
#include <stack>
using namespace std;

class Solution {
public:
    vector<vector<int>> getAncestors(int n, vector<vector<int>>& edges) {
        unordered_map<int, vector<int>> nodes;
        vector<vector<int>> ancestors;
        for (int i = 0; i < n; i++)
        {
            nodes[i] = {};
        }

        for (int i = 0; i < edges.size(); i++)
        {
            nodes[edges[i][1]].push_back(edges[i][0]);
            if (nodes[edges[i][0]].size() != 0)
            {
                for (int j = 0; j < nodes[edges[i][0]].size(); j++)
                {
                    nodes[edges[i][1]].push_back(nodes[edges[i][0]][j]);
                }
            }
            
        }
        for (auto node : nodes) {
            sort(node.second.begin(), node.second.end());
            node.second.erase(unique(node.second.begin(), node.second.end()), node.second.end());
            ancestors.push_back(node.second);   
        }

        for (int i = 0; i < ancestors.size(); i++)
        {
            cout << i << " : ";
            for (int  j= 0;  j< ancestors[i].size(); j++)
            {
                cout << ancestors[i][j] << " ";
            }
            cout << endl;
        }
        return ancestors;
        
    }
};

int main() {
    Solution test;
    vector<vector<int>> edges = { {0,3}, {0,4}, {1,3}, {2,4}, {2,7}, {3,5}, {3,6}, {3,7}, {4,6} };
    test.getAncestors(8, edges);
    return 0;
}