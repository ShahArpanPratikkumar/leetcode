// Last updated: 08/06/2026, 11:35:25
1class Solution {
2public:
3    vector<string> summaryRanges(vector<int>& nums) {
4        vector<string> ans;
5
6        for (int i = 0; i < nums.size(); i++) {
7            int j = i;
8
9            while (j + 1 < nums.size() && nums[j + 1] == nums[j] + 1)
10                j++;
11
12            if (i == j)
13                ans.push_back(to_string(nums[i]));
14            else
15                ans.push_back(to_string(nums[i]) + "->" + to_string(nums[j]));
16
17            i = j;
18        }
19
20        return ans;
21    }
22};