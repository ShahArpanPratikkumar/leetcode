// Last updated: 10/09/2026, 09:52:17
1/**
2 * Definition for a binary tree node.
3 * struct TreeNode {
4 *     int val;give 
5 *     TreeNode *left;
6 *     TreeNode *right;
7 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
8 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
9 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
10 * };
11 */
12class Solution {
13    pair<int, int> dfs(TreeNode* root, int& count) {
14        if (!root) return {0, 0};
15
16        auto [leftSum, leftNodes] = dfs(root->left, count);
17        auto [rightSum, rightNodes] = dfs(root->right, count);
18
19        int sum = leftSum + rightSum + root->val;
20        int nodes = leftNodes + rightNodes + 1;
21
22        if (root->val == sum / nodes) {
23            count++;
24        }
25
26        return {sum, nodes};
27    }
28
29public:
30    int averageOfSubtree(TreeNode* root) {
31        int count = 0;
32        dfs(root, count);
33        return count;
34    }
35};