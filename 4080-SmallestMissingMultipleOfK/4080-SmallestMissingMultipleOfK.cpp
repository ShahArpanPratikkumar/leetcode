// Last updated: 25/08/2026, 10:44:17
class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_set<int> numSet(nums.begin(), nums.end());
        
        int multiple = k;
        while (numSet.count(multiple)) {
            multiple += k;
        }
        
        return multiple;
    }
};
