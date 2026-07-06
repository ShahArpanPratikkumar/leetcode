// Last updated: 06/07/2026, 13:48:39
1class Solution {
2public:
3    vector<vector<int>> generate(int numRows) {
4        vector<vector<int>> ans;
5
6        for (int i = 0; i < numRows; i++) {
7            vector<int> row(i + 1, 1);
8
9            for (int j = 1; j < i; j++) {
10                row[j] = ans[i - 1][j - 1] + ans[i - 1][j];
11            }
12
13            ans.push_back(row);
14        }
15
16        return ans;
17    }
18};