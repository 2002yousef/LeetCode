#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
using namespace std;

class UnionFind {
private:
    vector<int> parent;
    vector<int> rank;
public:
    UnionFind(int n) : parent(n), rank(n, 1) {
        iota(parent.begin(), parent.end(), 0);
    }

    int find(int u) {
        if (parent[u] != u) {
            parent[u] = find(parent[u]);
        }
        return parent[u];
    }

    bool unionSets(int u, int v) {
        int rootU = find(u);
        int rootV = find(v);
        if (rootU != rootV) {
            if (rank[rootU] > rank[rootV]) 
            {
                parent[rootV] = rootU;
            }
            else if (rank[rootU] < rank[rootV])
            {
                parent[rootU] = rootV;
            }
            else {
                parent[rootV] = rootU;
                rank[rootU]++;
            }
            return true;
        }
        return false;
    }
};

class Solution {
public:
    int maxNumEdgesToRemove(int n, vector<vector<int>>& edges) {
        UnionFind aliceUF(n);
        UnionFind bobUF(n);

        int removableEdges = 0;
        int commonEdges = 0;

        // Process type 3 edges
        for (auto edge : edges) {
            int type = edge[0];
            int u = edge[1] - 1;
            int v = edge[2] - 1;
            if (type == 3)
            {
                if (aliceUF.unionSets(u,v) && bobUF.unionSets(u,v))
                {
                    commonEdges++;
                }
                else
                {
                    removableEdges++;
                }
            }
        }

        // Process Type 1 and 2
        for (auto edge : edges) {
            int type = edge[0];
            int u = edge[1] - 1;
            int v = edge[2] - 1;
            if (type == 1)
            {
                if (!aliceUF.unionSets(u,v))
                {
                    removableEdges++;
                }
            }
            else if (type == 2)
            {
                if (!bobUF.unionSets(u,v))
                {
                    removableEdges++;
                }
            }
        }

        // Check connectivity
        auto isFullyTraversable = [&n](UnionFind& uf) {
            int root = uf.find(0);
            for (int i = 0; i < n; ++i)
            {
                if (uf.find(i) != root) 
                {
                    return false;
                }
            }
            return true;
        };

        if (!isFullyTraversable(aliceUF) || !isFullyTraversable(bobUF))
        {
            return -1;
        }
        return removableEdges;
    }
};

int main() {
    Solution test;
    vector<vector<int>> edges = { {3,1,2}, {3,2,3}, {1,1,3}, {1,2,4}, {1,1,2}, {2,3,4} };
    cout << test.maxNumEdgesToRemove(4, edges);
    return 0;
}