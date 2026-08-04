// Last updated: 04/08/2026, 09:09:00
1class Solution {
2public:
3    vector<int> findMissingElements(vector<int>& nums) {
4        sort(nums.begin(), nums.end());
5        vector<int> result;
6
7        for (size_t i = 1; i < nums.size(); ++i) {
8            for (int missing = nums[i - 1] + 1; missing < nums[i]; ++missing) {
9                result.push_back(missing);
10            }
11        }
12
13        return result;
14    }
15};