// Last updated: 07/07/2026, 21:14:42
1/**
2 * Definition for a binary tree node.
3 * struct TreeNode {
4 *     int val;
5 *     TreeNode *left;
6 *     TreeNode *right;
7 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
8 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
9 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
10 * };
11 */
12class Solution {
13public:
14    vector<int> ans;
15
16    void dfs(TreeNode* root) {
17        if (!root) return;
18        dfs(root->left);
19        dfs(root->right);
20        ans.push_back(root->val);
21    }
22
23    vector<int> postorderTraversal(TreeNode* root) {
24        dfs(root);
25        return ans;
26    }
27};