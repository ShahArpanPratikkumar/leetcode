// Last updated: 09/08/2026, 13:32:24
1class Solution {
2public:
3    bool checkRecord(string s) {
4        int absCount = 0;
5        int lateCount = 0;
6
7        for (char c : s) {
8            if (c == 'A') {
9                absCount++;
10                lateCount = 0; 
11                if (absCount >= 2) return false;
12            } else if (c == 'L') {
13                lateCount++;
14                if (lateCount >= 3) return false;
15            } else {
16                lateCount = 0; 
17            }
18        }
19
20        return true;
21    }
22};