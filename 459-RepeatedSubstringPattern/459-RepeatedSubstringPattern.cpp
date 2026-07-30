// Last updated: 30/07/2026, 10:06:56
class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        string doubled = s + s;
        // Search for 's' in 'doubled' starting from index 1 up to index doubled.length() - 2
        return doubled.substr(1, doubled.length() - 2).find(s) != string::npos;
    }
};