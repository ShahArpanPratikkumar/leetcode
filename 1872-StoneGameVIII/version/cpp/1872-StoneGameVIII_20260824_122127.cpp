// Last updated: 24/08/2026, 12:21:27
1class Solution {
2public:
3    int stoneGameVIII(vector<int>& stones) {
4        int n = stones.size();
5        
6        // Compute prefix sums in-place
7        for (int i = 1; i < n; i++) {
8            stones[i] += stones[i - 1];
9        }
10        
11        // Base case: max score difference starting from the last valid state
12        int maxDiff = stones[n - 1];
13        
14        // Process backward from the second-to-last element down to index 1 (at least 2 stones taken)
15        for (int i = n - 2; i >= 1; i--) {
16            maxDiff = max(maxDiff, stones[i] - maxDiff);
17        }
18        
19        return maxDiff;
20    }
21};