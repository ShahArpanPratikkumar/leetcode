// Last updated: 30/07/2026, 10:08:35


class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if (!p && !q) return true;        // both null → same
        if (!p || !q) return false;       // one null → not same
        if (p->val != q->val) return false; // values differ → not same
        return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
    }
};