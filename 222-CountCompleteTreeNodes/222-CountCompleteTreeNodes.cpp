// Last updated: 30/07/2026, 10:07:54
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
public:
    int countNodes(TreeNode* root) {
        // Base case: if the node is null, it contributes 0 to the count
        if (!root) return 0;
        
        // Count the current node (1) + left subtree nodes + right subtree nodes
        return 1 + countNodes(root->left) + countNodes(root->right);
    }
};