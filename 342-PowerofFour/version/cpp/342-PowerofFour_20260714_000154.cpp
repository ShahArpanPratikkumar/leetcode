// Last updated: 14/07/2026, 00:01:54
1class Solution {
2public:
3    bool canConstruct(string ransomNote, string magazine) {
4        int count[26] = {0};
5        
6        // Count the frequency of each character in the magazine
7        for (char c : magazine) {
8            count[c - 'a']++;
9        }
10        
11        // Verify if the ransom note can be formed
12        for (char c : ransomNote) {
13            if (--count[c - 'a'] < 0) {
14                return false; // Not enough letters available
15            }
16        }
17        
18        return true;
19    }
20};