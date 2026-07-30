// Last updated: 30/07/2026, 10:07:42
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
private:
    void calculatePaths(TreeNode* node, string currentPath, vector<string>& result) {
        if (node == nullptr) {
            return;
        }
        
        // Append current node's value to the path
        currentPath += to_string(node->val);
        
        // Check if it's a leaf node
        if (node->left == nullptr && node->right == nullptr) {
            result.push_back(currentPath);
            return;
        }
        
        // If not a leaf, add the arrow and recurse down both children
        currentPath += "->";
        calculatePaths(node->left, currentPath, result);
        calculatePaths(node->right, currentPath, result);
    }

public:
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> result;
        if (root != nullptr) {
            calculatePaths(root, "", result);
        }
        return result;
    }
};