// Last updated: 25/07/2026, 21:38:50
1class Solution {
2public:
3    bool repeatedSubstringPattern(string s) {
4        string doubled = s + s;
5        // Search for 's' in 'doubled' starting from index 1 up to index doubled.length() - 2
6        return doubled.substr(1, doubled.length() - 2).find(s) != string::npos;
7    }
8};