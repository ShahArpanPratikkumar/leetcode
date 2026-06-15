// Last updated: 15/06/2026, 10:47:31
1class Solution {
2public:
3    vector<int> findAnagrams(string s, string p) {
4        vector<int> ans;
5
6        int n = s.size();
7        int m = p.size();
8
9        if (m > n) return ans;
10
11        vector<int> freqP(26, 0);
12        vector<int> window(26, 0);
13
14        for (char ch : p)
15            freqP[ch - 'a']++;
16
17        for (int i = 0; i < m; i++)
18            window[s[i] - 'a']++;
19
20        if (window == freqP)
21            ans.push_back(0);
22
23        for (int i = m; i < n; i++) {
24
25            // add new character
26            window[s[i] - 'a']++;
27
28            // remove old character
29            window[s[i - m] - 'a']--;
30
31            if (window == freqP)
32                ans.push_back(i - m + 1);
33        }
34
35        return ans;
36    }
37};