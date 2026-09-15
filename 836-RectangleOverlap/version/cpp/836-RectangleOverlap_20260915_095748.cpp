// Last updated: 15/09/2026, 09:57:48
1class Solution {
2public:
3    bool isRectangleOverlap(vector<int>& rec1, vector<int>& rec2) {
4        // Check if rec1 is to the left, right, above, or below rec2
5        return !(rec1[2] <= rec2[0] || // rec1 is to the left of rec2
6                 rec1[0] >= rec2[2] || // rec1 is to the right of rec2
7                 rec1[3] <= rec2[1] || // rec1 is below rec2
8                 rec1[1] >= rec2[3]);  // rec1 is above rec2
9    }
10};