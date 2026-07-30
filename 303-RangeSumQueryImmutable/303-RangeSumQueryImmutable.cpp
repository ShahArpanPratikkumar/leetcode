// Last updated: 30/07/2026, 10:07:32
class NumArray {
private:
    vector<int> prefixSums;

public:
    NumArray(vector<int>& nums) {
        // Size is n + 1 to easily handle the left = 0 boundary case
        prefixSums.resize(nums.size() + 1, 0);
        for (int i = 0; i < nums.size(); ++i) {
            prefixSums[i + 1] = prefixSums[i] + nums[i];
        }
    }
    
    int sumRange(int left, int right) {
        return prefixSums[right + 1] - prefixSums[left];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */