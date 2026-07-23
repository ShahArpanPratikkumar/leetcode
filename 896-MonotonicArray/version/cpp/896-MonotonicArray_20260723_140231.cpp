// Last updated: 23/07/2026, 14:02:31
1class Solution {
2public:
3    bool isMonotonic(vector<int>& nums) {
4        bool isIncreasing = true;
5        bool isDecreasing = true;
6
7        for (int i = 0; i < nums.size() - 1; i++) {
8            if (nums[i] < nums[i + 1]) {
9                isDecreasing = false;
10            }
11            if (nums[i] > nums[i + 1]) {
12                isIncreasing = false;
13            }
14        }
15
16        return isIncreasing || isDecreasing;
17    }
18};