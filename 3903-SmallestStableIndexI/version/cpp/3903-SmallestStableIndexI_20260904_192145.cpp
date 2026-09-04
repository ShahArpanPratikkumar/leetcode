// Last updated: 04/09/2026, 19:21:45
1class Solution {
2public:
3    int firstStableIndex(vector<int>& nums, int k) {
4        int n = nums.size();
5        vector<int> suffix_min(n);
6        
7        // Build suffix minimum array
8        suffix_min[n - 1] = nums[n - 1];
9        for (int i = n - 2; i >= 0; --i) {
10            suffix_min[i] = min(nums[i], suffix_min[i + 1]);
11        }
12        
13        int prefix_max = nums[0];
14        for (int i = 0; i < n; ++i) {
15            prefix_max = max(prefix_max, nums[i]);
16            
17            // Check instability score
18            if (prefix_max - suffix_min[i] <= k) {
19                return i;
20            }
21        }
22        
23        return -1;
24    }
25};