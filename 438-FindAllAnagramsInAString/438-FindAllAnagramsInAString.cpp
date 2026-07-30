// Last updated: 30/07/2026, 10:07:01
class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> ans;

        int n = s.size();
        int m = p.size();

        if (m > n) return ans;

        vector<int> freqP(26, 0);
        vector<int> window(26, 0);

        for (char ch : p)
            freqP[ch - 'a']++;

        for (int i = 0; i < m; i++)
            window[s[i] - 'a']++;

        if (window == freqP)
            ans.push_back(0);

        for (int i = m; i < n; i++) {

            // add new character
            window[s[i] - 'a']++;

            // remove old character
            window[s[i - m] - 'a']--;

            if (window == freqP)
                ans.push_back(i - m + 1);
        }

        return ans;
    }
};