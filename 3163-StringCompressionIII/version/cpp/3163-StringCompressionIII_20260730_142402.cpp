// Last updated: 30/07/2026, 14:24:02
1class Solution {
2public:
3    string compressedString(string word) {
4        string comp = "";
5        int n = word.length();
6        int i = 0;
7
8        while (i < n) {
9            char c = word[i];
10            int count = 0;
11
12            while (i < n && word[i] == c && count < 9) {
13                count++;
14                i++;
15            }
16
17            comp += to_string(count) + c;
18        }
19
20        return comp;
21    }
22};