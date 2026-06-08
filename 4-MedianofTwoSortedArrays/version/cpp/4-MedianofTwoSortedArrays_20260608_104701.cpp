// Last updated: 08/06/2026, 10:47:01
1class Solution {
2public:
3    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
4        vector<int> nums;
5
6        int i = 0, j = 0;
7
8        while (i < nums1.size() && j < nums2.size()) {
9            if (nums1[i] <= nums2[j])
10                nums.push_back(nums1[i++]);
11            else
12                nums.push_back(nums2[j++]);
13        }
14
15        while (i < nums1.size())
16            nums.push_back(nums1[i++]);
17
18        while (j < nums2.size())
19            nums.push_back(nums2[j++]);
20
21        int n = nums.size();
22
23        if (n % 2 == 1)
24            return nums[n / 2];
25
26        return (nums[n / 2 - 1] + nums[n / 2]) / 2.0;
27    }
28};