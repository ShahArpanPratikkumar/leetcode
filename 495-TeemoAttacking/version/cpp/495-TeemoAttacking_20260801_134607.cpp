// Last updated: 01/08/2026, 13:46:07
1class Solution {
2public:
3    int findPoisonedDuration(std::vector<int>& timeSeries, int duration) {
4        if (timeSeries.empty()) return 0;
5
6        int totalPoisonedTime = 0;
7        int n = timeSeries.size();
8
9        for (int i = 0; i < n - 1; ++i) {
10            totalPoisonedTime += std::min(duration, timeSeries[i + 1] - timeSeries[i]);
11        }
12
13        totalPoisonedTime += duration;
14
15        return totalPoisonedTime;
16    }
17};