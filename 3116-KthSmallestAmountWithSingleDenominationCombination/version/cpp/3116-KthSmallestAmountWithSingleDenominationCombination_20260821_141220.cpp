// Last updated: 21/08/2026, 14:12:20
1#include <vector>
2#include <numeric>
3#include <algorithm>
4
5using namespace std;
6
7class Solution {
8public:
9    long long findKthSmallest(vector<int>& coins, int k) {
10        int n = coins.size();
11
12        // Helper function to count unique amounts <= x using Inclusion-Exclusion
13        auto countAmounts = [&](long long x) {
14            long long count = 0;
15            int totalSubsets = 1 << n;
16
17            for (int mask = 1; mask < totalSubsets; ++mask) {
18                long long currentLcm = 1;
19                int bitsCount = 0;
20                bool overflow = false;
21
22                for (int i = 0; i < n; ++i) {
23                    if ((mask >> i) & 1) {
24                        bitsCount++;
25                        long long g = std::gcd(currentLcm, (long long)coins[i]);
26                        currentLcm = (currentLcm / g) * coins[i];
27
28                        if (currentLcm > x) {
29                            overflow = true;
30                            break;
31                        }
32                    }
33                }
34
35                if (overflow) continue;
36
37                if (bitsCount % 2 == 1) {
38                    count += x / currentLcm;
39                } else {
40                    count -= x / currentLcm;
41                }
42            }
43
44            return count;
45        };
46
47        // Binary search range for the answer
48        long long low = 1;
49        long long high = 1LL * *min_element(coins.begin(), coins.end()) * k;
50        long long ans = high;
51
52        while (low <= high) {
53            long long mid = low + (high - low) / 2;
54
55            if (countAmounts(mid) >= k) {
56                ans = mid;
57                high = mid - 1; // Try to find a smaller valid amount
58            } else {
59                low = mid + 1;
60            }
61        }
62
63        return ans;
64    }
65};