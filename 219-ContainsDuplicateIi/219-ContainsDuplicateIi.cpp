// Last updated: 30/07/2026, 10:07:56
class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int, int> num_to_index; // Stores: {number -> its last seen index}
        
        for (int i = 0; i < nums.size(); i++) {
            // Check if we have seen this number before
            if (num_to_index.find(nums[i]) != num_to_index.end()) {
                // If the distance between current index and last seen index is <= k, we found it!
                if (i - num_to_index[nums[i]] <= k) {
                    return true;
                }
            }
            // Update the map with the current index for this number
            num_to_index[nums[i]] = i;
        }
        
        return false;
    }
};