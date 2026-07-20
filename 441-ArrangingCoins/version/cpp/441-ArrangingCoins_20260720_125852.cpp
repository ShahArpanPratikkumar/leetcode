// Last updated: 20/07/2026, 12:58:52
1class Solution {
2public:
3    vector<vector<int>> threeSum(vector<int>& nums) {
4        vector<vector<int>> result;
5        int n = nums.size();
6        
7        // 1. Sort the array so we can use two pointers and skip duplicates easily
8        sort(nums.begin(), nums.end());
9        
10        // 2. Fix the first element and find the other two
11        for (int i = 0; i < n - 2; i++) {
12            // Skip duplicates for the first element
13            if (i > 0 && nums[i] == nums[i - 1]) continue;
14            
15            int left = i + 1;
16            int right = n - 1;
17            
18            while (left < right) {
19                int sum = nums[i] + nums[left] + nums[right];
20                
21                if (sum == 0) {
22                    result.push_back({nums[i], nums[left], nums[right]});
23                    
24                    // Skip duplicate elements for left and right pointers
25                    while (left < right && nums[left] == nums[left + 1]) left++;
26                    while (left < right && nums[right] == nums[right - 1]) right--;
27                    
28                    left++;
29                    right--;
30                } else if (sum < 0) {
31                    left++;  // Increase sum by moving left pointer right
32                } else {
33                    right--; // Decrease sum by moving right pointer left
34                }
35            }
36        }
37        
38        return result;
39    }
40};