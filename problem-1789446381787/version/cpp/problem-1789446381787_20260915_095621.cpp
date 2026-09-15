// Last updated: 15/09/2026, 09:56:21
1class Solution {
2public:
3    int largestOverlap(vector<vector<int>>& img1, vector<vector<int>>& img2) {
4        int n = img1.size();
5        vector<pair<int, int>> p1, p2;
6
7        for (int i = 0; i < n; ++i) {
8            for (int j = 0; j < n; ++j) {
9                if (img1[i][j] == 1) p1.push_back({i, j});
10                if (img2[i][j] == 1) p2.push_back({i, j});
11            }
12        }
13
14        map<pair<int, int>, int> count;
15        int max_overlap = 0;
16
17        for (auto& [r1, c1] : p1) {
18            for (auto& [r2, c2] : p2) {
19                pair<int, int> vec = {r2 - r1, c2 - c1};
20                count[vec]++;
21                max_overlap = max(max_overlap, count[vec]);
22            }
23        }
24
25        return max_overlap;
26    }
27};