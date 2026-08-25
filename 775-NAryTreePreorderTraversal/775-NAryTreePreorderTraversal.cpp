// Last updated: 25/08/2026, 10:45:43
class Solution {
public:
    vector<int> preorder(Node* root) {
        vector<int> result;
        if (!root) return result;

        stack<Node*> st;
        st.push(root);

        while (!st.empty()) {
            Node* curr = st.top();
            st.pop();
            
            result.push_back(curr->val);

            // Push children in reverse order so leftmost child is processed first
            for (int i = curr->children.size() - 1; i >= 0; i--) {
                if (curr->children[i]) {
                    st.push(curr->children[i]);
                }
            }
        }

        return result;
    }
};