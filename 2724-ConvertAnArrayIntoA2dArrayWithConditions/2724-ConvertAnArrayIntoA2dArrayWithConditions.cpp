// Last updated: 30/07/2026, 10:06:24
class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        vector<int> freq(nums.size() + 1, 0);
        vector<vector<int>> ans;

        for (int num : nums) {
            freq[num]++;

            if (ans.size() < freq[num]) {
                ans.push_back({});
            }

            ans[freq[num] - 1].push_back(num);
        }

        return ans;
    }
};