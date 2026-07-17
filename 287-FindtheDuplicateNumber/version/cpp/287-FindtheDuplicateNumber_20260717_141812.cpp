// Last updated: 17/07/2026, 14:18:12
1class Solution {
2public:
3    int findDuplicate(vector<int>& nums) {
4        unordered_map<int, int> mp;
5        for (auto i : nums) {
6            if (mp[i] == 0) {
7                mp[i] = 1;
8
9            } else {
10                return i;
11            }
12        }
13        return -1;
14    }
15};