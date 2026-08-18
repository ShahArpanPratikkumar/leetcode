// Last updated: 18/08/2026, 21:40:55
1class Solution {
2public:
3    int largestInteger(vector<int>& nums, int k) {
4        int n = nums.size();
5        unordered_map<int, int> freq;
6
7        // Count frequencies of elements in each subarray of size k
8        for (int i = 0; i <= n - k; ++i) {
9            unordered_set<int> unique_in_subarray(nums.begin() + i, nums.begin() + i + k);
10            for (int num : unique_in_subarray) {
11                freq[num]++;
12            }
13        }
14
15        int ans = -1;
16        // Find the maximum value that appears in exactly 1 subarray
17        for (auto& [num, count] : freq) {
18            if (count == 1) {
19                ans = max(ans, num);
20            }
21        }
22
23        return ans;
24    }
25};