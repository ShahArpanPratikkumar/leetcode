// Last updated: 09/08/2026, 13:30:25
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
14    int diameter = 0;
15
16    int calculateHeight(TreeNode* node) {
17        if (!node) return 0;
18
19        int leftHeight = calculateHeight(node->left);
20        int rightHeight = calculateHeight(node->right);
21        diameter = max(diameter, leftHeight + rightHeight);
22
23        return 1 + max(leftHeight, rightHeight);
24    }
25
26    int diameterOfBinaryTree(TreeNode* root) {
27        calculateHeight(root);
28        return diameter;
29    }
30};