// Last updated: 30/07/2026, 10:06:37
class Solution {
public:
    int balancedStringSplit(string s) {
        int cnt = 0, ans = 0;

        for (char c : s) {
            if (c == 'R')
                cnt++;
            else
                cnt--;

            if (cnt == 0)
                ans++;
        }

        return ans;
    }
};