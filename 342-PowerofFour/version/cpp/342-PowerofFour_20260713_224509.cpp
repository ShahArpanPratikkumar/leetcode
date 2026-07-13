// Last updated: 13/07/2026, 22:45:09
1class Solution {
2public:
3    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
4        unordered_map<int, int> counts;
5        vector<int> result;
6        
7        // Count frequencies of elements in nums1
8        for (int num : nums1) {
9            counts[num]++;
10        }
11        
12        // Find matching elements from nums2
13        for (int num : nums2) {
14            if (counts[num] > 0) {
15                result.push_back(num);
16                counts[num]--; // Reduce count since we used one match
17            }
18        }
19        
20        return result;
21    }
22};