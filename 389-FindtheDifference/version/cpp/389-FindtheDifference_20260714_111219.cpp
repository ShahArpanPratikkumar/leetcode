// Last updated: 14/07/2026, 11:12:19
1class Solution {
2public:
3    bool isSubsequence(string s, string t) {
4        int i = 0; // Pointer for string s
5        
6        // Scan through string t
7        for (char c : t) {
8            // If characters match, move to the next character in s
9            if (i < s.length() && s[i] == c) {
10                i++;
11            }
12        }
13        
14        // If we matched all characters of s, i will equal s.length()
15        return i == s.length();
16    }
17};