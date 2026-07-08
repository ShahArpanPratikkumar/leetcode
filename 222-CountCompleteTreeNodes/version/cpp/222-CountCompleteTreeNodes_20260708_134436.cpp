// Last updated: 08/07/2026, 13:44:36
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
12
13class Solution {
14public:
15    int countNodes(TreeNode* root) {
16        // Base case: if the node is null, it contributes 0 to the count
17        if (!root) return 0;
18        
19        // Count the current node (1) + left subtree nodes + right subtree nodes
20        return 1 + countNodes(root->left) + countNodes(root->right);
21    }
22};