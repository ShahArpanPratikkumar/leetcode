// Last updated: 12/08/2026, 19:20:12
1class Solution {
2public:
3    int maxSubarrayLength(vector<int>& nums, int k) {
4        unordered_map<int, int> count;
5        int maxLen = 0;
6        int left = 0;
7
8        for (int right = 0; right < nums.size(); ++right) {
9            count[nums[right]]++;
10            
11            while (count[nums[right]] > k) {
12                count[nums[left]]--;
13                left++;
14            }
15            
16            maxLen = max(maxLen, right - left + 1);
17        }
18        
19        return maxLen;
20    }
21};