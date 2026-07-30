// Last updated: 30/07/2026, 10:07:23
class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> counts;
        vector<int> result;
        
        // Count frequencies of elements in nums1
        for (int num : nums1) {
            counts[num]++;
        }
        
        // Find matching elements from nums2
        for (int num : nums2) {
            if (counts[num] > 0) {
                result.push_back(num);
                counts[num]--; // Reduce count since we used one match
            }
        }
        
        return result;
    }
};