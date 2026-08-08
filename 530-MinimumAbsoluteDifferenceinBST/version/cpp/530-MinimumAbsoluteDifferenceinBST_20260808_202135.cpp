// Last updated: 08/08/2026, 20:21:35
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
13private:
14    int minDiff = INT_MAX;
15    TreeNode* prev = nullptr;
16
17    void inorder(TreeNode* node) {
18        if (!node) return;
19
20        inorder(node->left);
21
22        if (prev != nullptr) {
23            minDiff = min(minDiff, node->val - prev->val);
24        }
25        prev = node; 
26
27        inorder(node->right);
28    }
29
30public:
31    int getMinimumDifference(TreeNode* root) {
32        inorder(root);
33        return minDiff;
34    }
35};