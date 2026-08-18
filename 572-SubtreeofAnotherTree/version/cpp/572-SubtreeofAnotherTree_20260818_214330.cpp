// Last updated: 18/08/2026, 21:43:30
1class Solution {
2public:
3    bool isSame(TreeNode* s, TreeNode* t) {
4        if (!s && !t) return true;
5        if (!s || !t) return false;
6        if (s->val != t->val) return false;
7        return isSame(s->left, t->left) && isSame(s->right, t->right);
8    }
9
10    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
11        if (!root) return false;
12        if (isSame(root, subRoot)) return true;
13        return isSubtree(root->left, subRoot) || isSubtree(root->right, subRoot);
14    }
15};