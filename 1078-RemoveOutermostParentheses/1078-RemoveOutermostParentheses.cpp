// Last updated: 30/07/2026, 10:06:42
class Solution {
public:
    string removeOuterParentheses(string s) {
        string ans ;
        int depth = 0;

        for (char c : s){
            if ( c == '(') {
                if (depth > 0 ) ans += c;
                depth++;
            }
            else {
                depth--;
                if (depth > 0 ) ans += c;
            }
        }
        return ans;
    }
};