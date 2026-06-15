// Last updated: 15/06/2026, 09:21:42
1class Solution {
2public:
3    int mostWordsFound(vector<string>& sentences) {
4        int maxWords = 0;
5
6        for (string s : sentences) {
7            int words = 1; 
8
9            for (char ch : s) {
10                if (ch == ' ')
11                    words++;
12            }
13
14            maxWords = max(maxWords, words);
15        }
16
17        return maxWords;
18    }
19};