// Last updated: 13/07/2026, 22:40:10
1class Solution {
2public:
3    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
4        unordered_set<int> set1(nums1.begin(), nums1.end());
5        unordered_set<int> intersectSet;
6        
7        // Find common elements
8        for (int num : nums2) {
9            if (set1.count(num)) {
10                intersectSet.insert(num);
11            }
12        }
13        
14        // Convert the unique intersections into the final vector
15        return vector<int>(intersectSet.begin(), intersectSet.end());
16    }
17};