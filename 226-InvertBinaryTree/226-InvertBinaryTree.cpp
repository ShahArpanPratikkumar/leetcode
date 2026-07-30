// Last updated: 30/07/2026, 10:07:53
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
    TreeNode* invertTree(TreeNode* root) {
        // Base case: if the tree is empty
        if (root == nullptr) return nullptr;
        
        // Swap the left and right pointers
        swap(root->left, root->right);
        
        // Recursively invert the subtrees
        invertTree(root->left);
        invertTree(root->right);
        
        return root;
    }
};