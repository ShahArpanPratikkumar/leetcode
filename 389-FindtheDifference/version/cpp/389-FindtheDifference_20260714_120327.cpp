// Last updated: 14/07/2026, 12:03:27
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
14    int sumOfLeftLeaves(TreeNode* root) {
15        if (!root) return 0;
16        
17        int sum = 0;
18        
19        // Check if the left child is a leaf node
20        if (root->left && !root->left->left && !root->left->right) {
21            sum += root->left->val;
22        }
23        
24        // Recursively sum up left leaves from both subtrees
25        return sum + sumOfLeftLeaves(root->left) + sumOfLeftLeaves(root->right);
26    }
27};