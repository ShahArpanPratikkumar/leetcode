// Last updated: 30/07/2026, 10:07:15
class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i = 0; // Pointer for string s
        
        // Scan through string t
        for (char c : t) {
            // If characters match, move to the next character in s
            if (i < s.length() && s[i] == c) {
                i++;
            }
        }
        
        // If we matched all characters of s, i will equal s.length()
        return i == s.length();
    }
};