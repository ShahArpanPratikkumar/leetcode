// Last updated: 06/07/2026, 13:12:15
1class Solution {
2public:
3    bool hasPathSum(TreeNode* root, int targetSum) {
4        if (root == NULL)
5            return false;
6
7        targetSum -= root->val;
8
9        if (root->left == NULL && root->right == NULL)
10            return targetSum == 0;
11
12        return hasPathSum(root->left, targetSum) ||
13               hasPathSum(root->right, targetSum);
14    }
15};