// Last updated: 01/08/2026, 21:27:51
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
15    TreeNode* prev = nullptr;
16    int count = 0;
17    int maxCount = 0;
18
19    void inorder(TreeNode* root) {
20        if (!root) return;
21
22        inorder(root->left);
23
24        if (prev == nullptr) {
25            count = 1;
26        } else if (prev->val == root->val) {
27            count++;
28        } else {
29            count = 1;
30        }
31
32        if (count > maxCount) {
33            maxCount = count;
34            ans.clear();
35            ans.push_back(root->val);
36        } else if (count == maxCount) {
37            ans.push_back(root->val);
38        }
39
40        prev = root;
41
42        inorder(root->right);
43    }
44
45    vector<int> findMode(TreeNode* root) {
46        inorder(root);
47        return ans;
48    }
49};