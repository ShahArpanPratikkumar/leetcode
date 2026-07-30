// Last updated: 30/07/2026, 10:07:24
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> set1(nums1.begin(), nums1.end());
        unordered_set<int> intersectSet;
        
        // Find common elements
        for (int num : nums2) {
            if (set1.count(num)) {
                intersectSet.insert(num);
            }
        }
        
        // Convert the unique intersections into the final vector
        return vector<int>(intersectSet.begin(), intersectSet.end());
    }
};