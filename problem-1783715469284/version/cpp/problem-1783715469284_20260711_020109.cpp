// Last updated: 11/07/2026, 02:01:09
1class Solution {
2public:
3    bool isAnagram(string s, string t) {
4        if (s.length() != t.length()) {
5            return false;
6        }
7        
8        int count[26] = {0};
9        
10        // Count frequencies of each character
11        for (int i = 0; i < s.length(); i++) {
12            count[s[i] - 'a']++;
13            count[t[i] - 'a']--;
14        }
15        
16        // Check if all frequencies are zero
17        for (int i = 0; i < 26; i++) {
18            if (count[i] != 0) {
19                return false;
20            }
21        }
22        
23        return true;
24    }
25};