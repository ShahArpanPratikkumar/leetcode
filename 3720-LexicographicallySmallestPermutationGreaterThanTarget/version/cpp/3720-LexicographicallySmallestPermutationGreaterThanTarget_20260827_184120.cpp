// Last updated: 27/08/2026, 18:41:20
1class Solution {
2public:
3    string lexGreaterPermutation(string s, string target) {
4        int n = s.length();
5        vector<int> count(26, 0);
6        for (char c : s) {
7            count[c - 'a']++;
8        }
9
10        // Try to match prefix of target of length `L` (from n down to 0)
11        vector<int> prefix_count = count;
12        
13        // Track frequency availability as we match target characters
14        for (int L = 0; L <= n; ++L) {
15            // Check if we can form a prefix matching target[0...L-1]
16            // We evaluate backwards from longest prefix to shortest
17        }
18
19        // Alternative efficient construction:
20        // 1. Count frequencies of `s`
21        // 2. Walk along `target` as far as possible while frequencies allow.
22        // 3. From the deepest possible index `i`, try placing a character > target[i],
23        //    then fill the rest with sorted remaining characters.
24
25        // Store original character counts
26        vector<int> orig_count(26, 0);
27        for (char c : s) orig_count[c - 'a']++;
28
29        // Try to match target up to length L, then make (L)-th char strictly greater
30        for (int L = n - 1; L >= 0; --L) {
31            vector<int> freq = orig_count;
32            bool possible = true;
33
34            // Check if target[0...L-1] can be formed
35            for (int i = 0; i < L; ++i) {
36                if (--freq[target[i] - 'a'] < 0) {
37                    possible = false;
38                    break;
39                }
40            }
41            if (!possible) continue;
42
43            // Find smallest character strictly greater than target[L]
44            int diff_char = -1;
45            for (int c = target[L] - 'a' + 1; c < 26; ++c) {
46                if (freq[c] > 0) {
47                    diff_char = c;
48                    break;
49                }
50            }
51
52            if (diff_char != -1) {
53                // Build the answer string
54                string result = target.substr(0, L);
55                result.push_back('a' + diff_char);
56                freq[diff_char]--;
57
58                // Append remaining characters in ascending order
59                for (int c = 0; c < 26; ++c) {
60                    while (freq[c] > 0) {
61                        result.push_back('a' + c);
62                        freq[c]--;
63                    }
64                }
65                return result;
66            }
67        }
68
69        return "";
70    }
71};