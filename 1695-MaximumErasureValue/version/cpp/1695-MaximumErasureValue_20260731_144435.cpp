// Last updated: 31/07/2026, 14:44:35
1class Solution {
2public:
3    int maximumUniqueSubarray(vector<int>& nums) {
4        unordered_set<int> st;
5        int i = 0, j = 0;
6        int sum = 0, ans = 0;
7
8        while (j < nums.size()) {
9            while (st.count(nums[j])) {
10                st.erase(nums[i]);
11                sum -= nums[i];
12                i++;
13            }
14
15            st.insert(nums[j]);
16            sum += nums[j];
17            ans = max(ans, sum);
18            j++;
19        }
20
21        return ans;
22    }
23};