// Last updated: 31/07/2026, 21:08:55
1class Solution {
2public:
3    vector<int> constructRectangle(int area) {
4        int w = sqrt(area);
5        while (area % w != 0) {
6            w--;
7        }
8        return {area / w, w};
9    }
10};