// Last updated: 15/06/2026, 09:41:26
1class Solution {
2public:
3    int countSegments(string s) {
4        stringstream ss(s);
5        string word;
6        int count = 0;
7
8        while (ss >> word) {
9            count++;
10        }
11
12        return count;
13    }
14};