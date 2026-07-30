// Last updated: 30/07/2026, 10:08:09
class Solution {
public:
    int titleToNumber(string columnTitle) {
        int ans = 0;

        for (char ch : columnTitle) {
            ans = ans * 26 + (ch - 'A' + 1);
        }

        return ans;
    }
};