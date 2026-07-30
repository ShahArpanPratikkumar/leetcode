// Last updated: 30/07/2026, 10:06:29
class Solution {
public:
    bool checkIfPangram(string sentence) {
        unordered_set<char> st;

        for (char ch : sentence) {
            st.insert(ch);
        }

        return st.size() == 26;
    }
};