// Last updated: 08/06/2026, 12:03:55
1class Solution {
2public:
3    bool containsNearbyDuplicate(vector<int>& nums, int k) {
4        unordered_map<int, int> num_to_index; // Stores: {number -> its last seen index}
5        
6        for (int i = 0; i < nums.size(); i++) {
7            // Check if we have seen this number before
8            if (num_to_index.find(nums[i]) != num_to_index.end()) {
9                // If the distance between current index and last seen index is <= k, we found it!
10                if (i - num_to_index[nums[i]] <= k) {
11                    return true;
12                }
13            }
14            // Update the map with the current index for this number
15            num_to_index[nums[i]] = i;
16        }
17        
18        return false;
19    }
20};