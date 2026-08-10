// Last updated: 10/08/2026, 13:20:21
1class Solution {
2public:
3    vector<int> searchRange(vector<int>& nums, int target) {
4        return {findBound(nums, target, true), findBound(nums, target, false)};
5    }
6
7private:
8    int findBound(const vector<int>& nums, int target, bool isFirst) {
9        int left = 0;
10        int right = nums.size() - 1;
11        int bound = -1;
12
13        while (left <= right) {
14            int mid = left + (right - left) / 2;
15
16            if (nums[mid] == target) {
17                bound = mid;
18                if (isFirst) {
19                    right = mid - 1;
20                } else {
21                    left = mid + 1; 
22                }
23            } else if (nums[mid] < target) {
24                left = mid + 1;
25            } else {
26                right = mid - 1;
27            }
28        }
29
30        return bound;
31    }
32};