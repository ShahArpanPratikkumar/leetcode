// Last updated: 13/06/2026, 14:50:41
1class Solution {
2public:
3    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
4        vector<int> sortedNums = nums;
5        sort(sortedNums.begin(), sortedNums.end());
6
7        unordered_map<int, int> count;
8
9        for (int i = 0; i < sortedNums.size(); i++) {
10            if (count.find(sortedNums[i]) == count.end()) {
11                count[sortedNums[i]] = i;
12            }
13        }
14
15        vector<int> ans;
16        for (int num : nums) {
17            ans.push_back(count[num]);
18        }
19
20        return ans;
21    }
22};