// Last updated: 14/07/2026, 10:52:12
1class Solution {
2public:
3    char findTheDifference(string s, string t) {
4        char result = 0;
5        
6        // XOR all characters in string s
7        for (char c : s) {
8            result ^= c;
9        }
10        
11        // XOR all characters in string t
12        for (char c : t) {
13            result ^= c;
14        }
15        
16        return result;
17    }
18};