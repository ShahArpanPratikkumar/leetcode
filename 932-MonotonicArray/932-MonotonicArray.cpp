// Last updated: 30/07/2026, 10:06:46
class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        bool isIncreasing = true;
        bool isDecreasing = true;

        for (int i = 0; i < nums.size() - 1; i++) {
            if (nums[i] < nums[i + 1]) {
                isDecreasing = false;
            }
            if (nums[i] > nums[i + 1]) {
                isIncreasing = false;
            }
        }

        return isIncreasing || isDecreasing;
    }
};