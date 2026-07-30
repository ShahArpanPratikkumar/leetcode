// Last updated: 30/07/2026, 10:07:11
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
    int sumOfLeftLeaves(TreeNode* root) {
        if (!root) return 0;
        
        int sum = 0;
        
        // Check if the left child is a leaf node
        if (root->left && !root->left->left && !root->left->right) {
            sum += root->left->val;
        }
        
        // Recursively sum up left leaves from both subtrees
        return sum + sumOfLeftLeaves(root->left) + sumOfLeftLeaves(root->right);
    }
};