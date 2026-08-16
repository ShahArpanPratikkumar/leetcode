// Last updated: 16/08/2026, 10:20:58
1#include <vector>
2#include <algorithm>
3
4class Solution {
5public:
6    bool stoneGameIX(std::vector<int>& stones) {
7        int cnt[3] = {0, 0, 0};
8        for (int stone : stones) {
9            cnt[stone % 3]++;
10        }
11        
12        // If the number of 0s is even, Alice wins if there is at least one 1 AND at least one 2.
13        if (cnt[0] % 2 == 0) {
14            return cnt[1] > 0 && cnt[2] > 0;
15        }
16        
17        // If the number of 0s is odd, Alice wins if the difference between count of 1s and 2s is >= 3.
18        return std::abs(cnt[1] - cnt[2]) >= 3;
19    }
20};