// Last updated: 08/08/2026, 21:18:44
class Solution {
public:
    int findLUSlength(string a, string b) {
        if (a == b) return -1;
        return max(a.length(), b.length());
    }
};