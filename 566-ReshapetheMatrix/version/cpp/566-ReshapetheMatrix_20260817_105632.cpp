// Last updated: 17/08/2026, 10:56:32
1class Solution {
2public:
3    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
4        int m = mat.size();
5        int n = mat[0].size();
6        
7        // Check if reshape is possible
8        if (m * n != r * c) {
9            return mat;
10        }
11        
12        vector<vector<int>> ans(r, vector<int>(c));
13        
14        for (int i = 0; i < m * n; ++i) {
15            ans[i / c][i % c] = mat[i / n][i % n];
16        }
17        
18        return ans;
19    }
20};