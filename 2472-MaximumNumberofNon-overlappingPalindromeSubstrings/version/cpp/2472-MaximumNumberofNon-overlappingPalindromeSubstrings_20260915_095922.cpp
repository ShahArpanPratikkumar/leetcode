// Last updated: 15/09/2026, 09:59:22
1class Solution {
2public:
3    int maxPalindromes(string s, int k) {
4        int n = s.length();
5        int count = 0;
6        int last_end = -1;
7
8        for (int center = 0; center < 2 * n - 1; ++center) {
9            int left = center / 2;
10            int right = left + (center % 2);
11
12            while (left >= 0 && right < n && s[left] == s[right]) {
13                if (left > last_end && (right - left + 1) >= k) {
14                    count++;
15                    last_end = right;
16                    break;
17                }
18                left--;
19                right++;
20            }
21        }
22
23        return count;
24    }
25};