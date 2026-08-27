// Last updated: 27/08/2026, 19:30:19
1class Solution {
2public:
3    int maxCount(int m, int n, vector<vector<int>>& ops) {
4        int min_row = m;
5        int min_col = n;
6        
7        for (const auto& op : ops) {
8            min_row = min(min_row, op[0]);
9            min_col = min(min_col, op[1]);
10        }
11        
12        return min_row * min_col;
13    }
14};