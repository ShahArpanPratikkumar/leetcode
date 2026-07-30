// Last updated: 30/07/2026, 10:08:36


class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        if (!root) return {};  // empty tree
        vector<int> left = inorderTraversal(root->left);   // traverse left
        vector<int> right = inorderTraversal(root->right); // traverse right
        left.push_back(root->val);                         // visit current
        left.insert(left.end(), right.begin(), right.end()); // combine results
        return left;
    }
};