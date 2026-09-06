// Last updated: 06/09/2026, 22:52:49
1class Solution {
2public:
3    int firstStableIndex(vector<int>& nums, int k) {
4        int n = nums.size();
5        if (n == 0) return -1;
6
7        // Precompute suffix minimums
8        vector<int> suffMin(n);
9        suffMin[n - 1] = nums[n - 1];
10        for (int i = n - 2; i >= 0; --i) {
11            suffMin[i] = min(nums[i], suffMin[i + 1]);
12        }
13
14        // Compute prefix maximum on the fly and check condition
15        int prefMax = nums[0];
16        for (int i = 0; i < n; ++i) {
17            prefMax = max(prefMax, nums[i]);
18            
19            // Instability score: max(nums[0..i]) - min(nums[i..n-1])
20            if (prefMax - suffMin[i] <= k) {
21                return i;
22            }
23        }
24
25        return -1;
26    }
27};