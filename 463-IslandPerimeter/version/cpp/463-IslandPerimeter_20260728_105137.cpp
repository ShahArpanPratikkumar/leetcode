// Last updated: 28/07/2026, 10:51:37
1class Solution {
2public:
3    int islandPerimeter(vector<vector<int>>& grid) {
4        int rows = grid.size();
5        int cols = grid[0].size();
6        int perimeter = 0;
7
8        for (int r = 0; r < rows; ++r) {
9            for (int c = 0; c < cols; ++c) {
10                if (grid[r][c] == 1) {
11                    perimeter += 4;
12
13                    // If the cell above is also land, subtract shared edges
14                    if (r > 0 && grid[r - 1][c] == 1) {
15                        perimeter -= 2;
16                    }
17                    // If the cell to the left is also land, subtract shared edges
18                    if (c > 0 && grid[r][c - 1] == 1) {
19                        perimeter -= 2;
20                    }
21                }
22            }
23        }
24
25        return perimeter;
26    }
27};