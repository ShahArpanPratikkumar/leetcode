// Last updated: 30/07/2026, 10:06:25
class Solution {
public:
    int countPairs(vector<int>& nums, int k) {
        int count = 0, n = nums.size();
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (nums[i] == nums[j] && (i * j) % k == 0) {
                    count++;
                }
            }
        }
        return count;
    }
};