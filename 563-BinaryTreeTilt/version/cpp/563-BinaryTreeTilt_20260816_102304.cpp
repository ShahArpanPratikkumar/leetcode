// Last updated: 16/08/2026, 10:23:04
1#include <cmath>
2
3class Solution {
4    int totalTilt = 0;
5
6    int calculateSum(TreeNode* node) {
7        if (!node) return 0;
8
9        int leftSum = calculateSum(node->left);
10        int rightSum = calculateSum(node->right);
11
12        totalTilt += std::abs(leftSum - rightSum);
13
14        return node->val + leftSum + rightSum;
15    }
16
17public:
18    int findTilt(TreeNode* root) {
19        totalTilt = 0;
20        calculateSum(root);
21        return totalTilt;
22    }
23};