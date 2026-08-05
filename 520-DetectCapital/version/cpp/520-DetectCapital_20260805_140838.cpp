// Last updated: 05/08/2026, 14:08:38
1class Solution {
2public:
3    bool detectCapitalUse(string word) {
4        int capCount = 0;
5        int n = word.length();
6        
7        for (char c : word) {
8            if (isupper(c)) {
9                capCount++;
10            }
11        }
12        
13        if (capCount == n || capCount == 0) {
14            return true;
15        }
16        
17       
18        if (capCount == 1 && isupper(word[0])) {
19            return true;
20        }
21        
22        return false;
23    }
24};