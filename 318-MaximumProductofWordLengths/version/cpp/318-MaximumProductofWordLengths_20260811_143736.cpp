// Last updated: 11/08/2026, 14:37:36
1class Solution {
2public:
3    int maxProduct(vector<string>& words) {
4        int n = words.size();
5        vector<int> masks(n, 0);
6        
7        for (int i = 0; i < n; ++i) {
8            for (char c : words[i]) {
9                masks[i] |= (1 << (c - 'a'));
10            }
11        }
12        
13        int max_prod = 0;
14        for (int i = 0; i < n; ++i) {
15            for (int j = i + 1; j < n; ++j) {
16                if ((masks[i] & masks[j]) == 0) {
17                    int prod = words[i].length() * words[j].length();
18                    max_prod = max(max_prod, prod);
19                }
20            }
21        }
22        
23        return max_prod;
24    }
25};