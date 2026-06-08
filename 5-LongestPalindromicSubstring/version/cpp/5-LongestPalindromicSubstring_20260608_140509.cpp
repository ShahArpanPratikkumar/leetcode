// Last updated: 08/06/2026, 14:05:09
1class Solution {
2public:
3    string longestPalindrome(string s) {
4        string res = "";
5        for (int i = 0; i < s.size(); i++) {
6            // check odd length
7            string odd = expand(s, i, i);
8            if (odd.size() > res.size()) res = odd;
9            // check even length
10            string even = expand(s, i, i + 1);
11            if (even.size() > res.size()) res = even;
12        }
13        return res;
14    }
15
16private:
17    string expand(const string &s, int left, int right) {
18        while (left >= 0 && right < s.size() && s[left] == s[right]) {
19            left--; right++;
20        }
21        return s.substr(left + 1, right - left - 1);
22    }
23};