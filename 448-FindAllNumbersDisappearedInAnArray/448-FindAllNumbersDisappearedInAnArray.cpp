// Last updated: 30/07/2026, 10:06:59
class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n = nums.size();
        vector<bool> seen(n + 1, false);
        
        // Mark all numbers that appear in the input
        for (int num : nums) {
            seen[num] = true;
        }
        
        // Collect any numbers that were never marked as seen
        vector<int> result;
        for (int i = 1; i <= n; ++i) {
            if (!seen[i]) {
                result.push_back(i);
            }
        }
        
        return result;
    }
};