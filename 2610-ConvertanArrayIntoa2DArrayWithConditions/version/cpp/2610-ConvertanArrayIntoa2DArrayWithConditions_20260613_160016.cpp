// Last updated: 13/06/2026, 16:00:16
1class Solution {
2public:
3    vector<vector<int>> findMatrix(vector<int>& nums) {
4        vector<int> freq(nums.size() + 1, 0);
5        vector<vector<int>> ans;
6
7        for (int num : nums) {
8            freq[num]++;
9
10            if (ans.size() < freq[num]) {
11                ans.push_back({});
12            }
13
14            ans[freq[num] - 1].push_back(num);
15        }
16
17        return ans;
18    }
19};