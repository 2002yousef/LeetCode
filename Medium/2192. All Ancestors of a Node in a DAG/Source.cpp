#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<vector<int>> getAncestors(int n, vector<vector<int>>& edges) {
        unordered_map<int, vector<int>> nodes;
        vector<unordered_set<int>> ancestors(n);
        vector<bool> visited(n, false);

        // Build the adjacency list
        for (int i = 0; i < edges.size(); i++) {
            nodes[edges[i][1]].push_back(edges[i][0]);
        }

        // Perform DFS for each node to find all its ancestors
        for (int i = 0; i < n; i++) {
            if (!visited[i]) {
                dfs(i, nodes, ancestors, visited);
            }
        }

        // Convert unordered_set to vector and sort
        vector<vector<int>> result(n);
        for (int i = 0; i < n; i++) {
            result[i] = vector<int>(ancestors[i].begin(), ancestors[i].end());
            sort(result[i].begin(), result[i].end());
        }

        return result;
    }

private:
    void dfs(int node, unordered_map<int, vector<int>>& nodes, vector<unordered_set<int>>& ancestors, vector<bool>& visited) {
        visited[node] = true;
        for (int parent : nodes[node]) {
            if (!visited[parent]) {
                dfs(parent, nodes, ancestors, visited);
            }
            ancestors[node].insert(parent);
            ancestors[node].insert(ancestors[parent].begin(), ancestors[parent].end());
        }
    }
};

int main() {
    Solution test;
    vector<vector<int>> edges = { {0,3}, {0,4}, {1,3}, {2,4}, {2,7}, {3,5}, {3,6}, {3,7}, {4,6} };
    test.getAncestors(8, edges);
    return 0;
}