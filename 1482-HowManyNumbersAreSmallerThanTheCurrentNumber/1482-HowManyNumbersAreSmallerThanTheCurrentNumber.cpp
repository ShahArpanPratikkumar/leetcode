// Last updated: 30/07/2026, 10:06:36
class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> sortedNums = nums;
        sort(sortedNums.begin(), sortedNums.end());

        unordered_map<int, int> count;

        for (int i = 0; i < sortedNums.size(); i++) {
            if (count.find(sortedNums[i]) == count.end()) {
                count[sortedNums[i]] = i;
            }
        }

        vector<int> ans;
        for (int num : nums) {
            ans.push_back(count[num]);
        }

        return ans;
    }
};