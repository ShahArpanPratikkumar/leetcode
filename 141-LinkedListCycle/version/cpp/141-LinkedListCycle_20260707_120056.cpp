// Last updated: 07/07/2026, 12:00:56
1class Solution {
2public:
3    vector<int> preorderTraversal(TreeNode* root) {
4        vector<int> ans;
5        preorder(root, ans);
6        return ans;
7    }
8
9    void preorder(TreeNode* root, vector<int>& ans) {
10        if (root == NULL)
11            return;
12
13        ans.push_back(root->val);
14        preorder(root->left, ans);
15        preorder(root->right, ans);
16    }
17};