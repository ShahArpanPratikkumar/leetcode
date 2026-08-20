// Last updated: 20/08/2026, 21:54:29
1class Solution {
2public:
3    vector<int> resultArray(vector<int>& nums) {
4        vector<int> arr1 = {nums[0]};
5        vector<int> arr2 = {nums[1]};
6
7        for (int i = 2; i < nums.size(); ++i) {
8            if (arr1.back() > arr2.back()) {
9                arr1.push_back(nums[i]);
10            } else {
11                arr2.push_back(nums[i]);
12            }
13        }
14
15        arr1.insert(arr1.end(), arr2.begin(), arr2.end());
16        return arr1;
17    }
18};