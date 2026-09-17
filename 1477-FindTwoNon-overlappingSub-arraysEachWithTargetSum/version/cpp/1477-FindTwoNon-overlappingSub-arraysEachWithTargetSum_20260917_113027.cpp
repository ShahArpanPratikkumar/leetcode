// Last updated: 17/09/2026, 11:30:27
1class Solution {
2public:
3    int minSumOfLengths(vector<int>& arr, int target) {
4        int n = arr.size();
5        unordered_map<int, int> prefix;
6        prefix[0] = -1;
7        
8        vector<int> min_len(n, INT_MAX);
9        int sum = 0, best_len = INT_MAX, ans = INT_MAX;
10
11        for (int i = 0; i < n; ++i) {
12            sum += arr[i];
13            
14            if (prefix.count(sum - target)) {
15                int prev_idx = prefix[sum - target];
16                int len = i - prev_idx;
17
18                if (prev_idx >= 0 && min_len[prev_idx] != INT_MAX) {
19                    ans = min(ans, len + min_len[prev_idx]);
20                }
21                best_len = min(best_len, len);
22            }
23
24            min_len[i] = best_len;
25            prefix[sum] = i;
26        }
27
28        return ans == INT_MAX ? -1 : ans;
29    }
30};