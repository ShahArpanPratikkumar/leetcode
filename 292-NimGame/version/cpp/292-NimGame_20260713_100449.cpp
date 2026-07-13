// Last updated: 13/07/2026, 10:04:49
1class NumArray {
2private:
3    vector<int> prefixSums;
4
5public:
6    NumArray(vector<int>& nums) {
7        // Size is n + 1 to easily handle the left = 0 boundary case
8        prefixSums.resize(nums.size() + 1, 0);
9        for (int i = 0; i < nums.size(); ++i) {
10            prefixSums[i + 1] = prefixSums[i] + nums[i];
11        }
12    }
13    
14    int sumRange(int left, int right) {
15        return prefixSums[right + 1] - prefixSums[left];
16    }
17};
18
19/**
20 * Your NumArray object will be instantiated and called as such:
21 * NumArray* obj = new NumArray(nums);
22 * int param_1 = obj->sumRange(left,right);
23 */