// Last updated: 13/06/2026, 15:06:08
1class Solution {
2public:
3    string reversePrefix(string word, char ch) {
4        for (int i = 0; i < word.size(); i++) {
5            if (word[i] == ch) {
6                reverse(word.begin(), word.begin() + i + 1);
7                break;
8            }
9        }
10        return word;
11    }
12};