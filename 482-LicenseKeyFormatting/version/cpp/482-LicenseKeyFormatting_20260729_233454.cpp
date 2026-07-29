// Last updated: 29/07/2026, 23:34:54
1class Solution {
2public:
3    int findMaxConsecutiveOnes(vector<int>& nums) {
4        int maxCount = 0;
5        int currentCount = 0;
6        
7        for (int num : nums) {
8            if (num == 1) {
9                currentCount++;
10                maxCount = max(maxCount, currentCount);
11            } else {
12                currentCount = 0;
13            }
14        }
15        
16        return maxCount;
17    }
18};