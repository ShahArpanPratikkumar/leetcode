// Last updated: 29/07/2026, 14:12:35
1class Solution {
2public:
3    int threeSumClosest(vector<int>& nums, int target) {
4        sort(nums.begin(), nums.end());
5        int closest = nums[0] + nums[1] + nums[2];
6        
7        for (int i = 0; i < nums.size() - 2; ++i) {
8            int left = i + 1, right = nums.size() - 1;
9            
10            while (left < right) {
11                int sum = nums[i] + nums[left] + nums[right];
12                
13                if (abs(target - sum) < abs(target - closest)) {
14                    closest = sum;
15                }
16                
17                if (sum < target) ++left;
18                else if (sum > target) --right;
19                else return target; // Perfect match found
20            }
21        }
22        
23        return closest;
24    }
25};