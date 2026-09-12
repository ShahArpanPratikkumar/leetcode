// Last updated: 12/09/2026, 15:42:55
1#include <vector>
2#include <algorithm>
3
4using namespace std;
5
6class Solution {
7    struct Interval {
8        int l, r, weight, id;
9        bool operator<(const Interval& other) const {
10            if (l != other.l) return l < other.l;
11            if (r != other.r) return r < other.r;
12            return id < other.id;
13        }
14    };
15
16public:
17    vector<int> maximumWeight(vector<vector<int>>& intervals) {
18        int n = intervals.size();
19        vector<Interval> a(n);
20        for (int i = 0; i < n; ++i) {
21            a[i] = {intervals[i][0], intervals[i][1], intervals[i][2], i};
22        }
23        sort(a.begin(), a.end());
24
25        // Array of left boundaries for binary search
26        vector<int> starts(n);
27        for (int i = 0; i < n; ++i) {
28            starts[i] = a[i].l;
29        }
30
31        // dp[i][k] stores {max_weight, list_of_chosen_original_indices}
32        vector<vector<pair<long long, vector<int>>>> dp(n + 1, vector<pair<long long, vector<int>>>(5, {0, {}}));
33
34        for (int i = n - 1; i >= 0; --i) {
35            // Find first interval starting strictly after current interval ends (a[i].r)
36            int nxt = upper_bound(starts.begin(), starts.end(), a[i].r) - starts.begin();
37
38            for (int k = 1; k <= 4; ++k) {
39                // Option 1: Skip interval i
40                auto best = dp[i + 1][k];
41
42                // Option 2: Take interval i
43                long long take_weight = a[i].weight + dp[nxt][k - 1].first;
44                
45                // Form candidates list
46                vector<int> take_indices = {a[i].id};
47                take_indices.insert(take_indices.end(), dp[nxt][k - 1].second.begin(), dp[nxt][k - 1].second.end());
48
49                pair<long long, vector<int>> take_cand = {take_weight, take_indices};
50
51                // Compare candidates
52                if (take_cand.first > best.first) {
53                    best = take_cand;
54                } else if (take_cand.first == best.first && take_cand.first > 0) {
55                    // Create sorted versions of indices to properly compare lexicographically
56                    vector<int> cand_sorted = take_cand.second;
57                    vector<int> best_sorted = best.second;
58                    sort(cand_sorted.begin(), cand_sorted.end());
59                    sort(best_sorted.begin(), best_sorted.end());
60
61                    if (best_sorted.empty() || cand_sorted < best_sorted) {
62                        best = take_cand;
63                    }
64                }
65
66                dp[i][k] = best;
67            }
68        }
69
70        vector<int> res = dp[0][4].second;
71        sort(res.begin(), res.end());
72        return res;
73    }
74};