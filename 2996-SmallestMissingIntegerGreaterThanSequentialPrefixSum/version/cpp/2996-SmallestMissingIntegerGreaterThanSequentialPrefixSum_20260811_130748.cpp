// Last updated: 11/08/2026, 13:07:48
1class Solution {
2public:
3    int missingInteger(vector<int>& nums) {
4        int sum = nums[0];
5        for (int i = 1; i < nums.size(); ++i) {
6            if (nums[i] == nums[i - 1] + 1) {
7                sum += nums[i];
8            } else {
9                break;
10            }
11        }
12        
13        unordered_set<int> st(nums.begin(), nums.end());
14        while (st.count(sum)) {
15            sum++;
16        }
17        
18        return sum;
19    }
20};