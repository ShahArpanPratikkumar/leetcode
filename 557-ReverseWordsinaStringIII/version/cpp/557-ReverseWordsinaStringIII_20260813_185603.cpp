// Last updated: 13/08/2026, 18:56:03
1class Solution {
2public:
3    string reverseWords(string s) {
4        int n = s.length();
5        int start = 0;
6        
7        for (int end = 0; end <= n; ++end) {
8            // When we hit a space or end of the string, reverse the word
9            if (end == n || s[end] == ' ') {
10                int left = start;
11                int right = end - 1;
12                while (left < right) {
13                    swap(s[left++], s[right--]);
14                }
15                start = end + 1; // Move start pointer to the next word
16            }
17        }
18        
19        return s;
20    }
21};