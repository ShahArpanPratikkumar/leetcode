// Last updated: 25/08/2026, 09:47:37
1class Solution {
2public:
3    int missingMultiple(vector<int>& nums, int k) {
4        unordered_set<int> numSet(nums.begin(), nums.end());
5        
6        int multiple = k;
7        while (numSet.count(multiple)) {
8            multiple += k;
9        }
10        
11        return multiple;
12    }
13};
14