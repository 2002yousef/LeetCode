#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
using namespace std;
 
 struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode() : val(0), left(nullptr), right(nullptr) {}
     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
 
class Solution {
public:
    TreeNode* createBinaryTree(vector<vector<int>>& descriptions) {
        unordered_map<int, TreeNode*> nodes;
        unordered_set<int> children;

        for (auto description : descriptions) {
            int parentVal = description[0];
            int childVal = description[1];
            bool isLeft = description[2] == 1;

            if (nodes.find(parentVal) == nodes.end())
            {
                nodes[parentVal] = new TreeNode(parentVal);
            }

            if (nodes.find(childVal) == nodes.end())
            {
                nodes[childVal] = new TreeNode(childVal);
            }

            if (isLeft)
            {
                nodes[parentVal]->left = nodes[childVal];
            }
            else
            {
                nodes[parentVal]->right = nodes[childVal];
            }

            children.insert(childVal);
        }

        TreeNode* root = nullptr;
        for (const auto& nodePair : nodes) {
            int nodeVal = nodePair.first;
            if (children.find(nodeVal) == children.end()) {
                root = nodePair.second;
                break;
            }
        }
        return root;
    }
};