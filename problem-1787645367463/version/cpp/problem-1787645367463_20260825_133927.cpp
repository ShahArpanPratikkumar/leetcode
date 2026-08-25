// Last updated: 25/08/2026, 13:39:27
1class Solution {
2public:
3    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
4        if (mat.empty() || mat[0].empty()) return {};
5        
6        int m = mat.size();
7        int n = mat[0].size();
8        vector<int> result(m * n);
9        
10        int row = 0, col = 0;
11        
12        for (int i = 0; i < m * n; ++i) {
13            result[i] = mat[row][col];
14            
15            // Moving Up-Right
16            if ((row + col) % 2 == 0) {
17                if (col == n - 1) {
18                    row++; // Hit right border, move down
19                } else if (row == 0) {
20                    col++; // Hit top border, move right
21                } else {
22                    row--;
23                    col++;
24                }
25            } 
26            // Moving Down-Left
27            else {
28                if (row == m - 1) {
29                    col++; // Hit bottom border, move right
30                } else if (col == 0) {
31                    row++; // Hit left border, move down
32                } else {
33                    row++;
34                    col--;
35                }
36            }
37        }
38        
39        return result;
40    }
41};