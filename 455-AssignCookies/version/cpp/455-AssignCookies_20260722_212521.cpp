// Last updated: 22/07/2026, 21:25:21
1class Solution {
2public:
3    int findContentChildren(std::vector<int>& g, std::vector<int>& s) {
4        // Sort both greed factors and cookie sizes
5        std::sort(g.begin(), g.end());
6        std::sort(s.begin(), s.end());
7
8        int child = 0;
9        int cookie = 0;
10
11        // Try to satisfy the child with the smallest greed factor first
12        while (child < g.size() && cookie < s.size()) {
13            if (s[cookie] >= g[child]) {
14                child++; // Child is content, move to the next child
15            }
16            cookie++; // Try the next cookie
17        }
18
19        return child; // Total number of content children
20    }
21};