// Last updated: 19/07/2026, 23:42:46
1class Solution {
2public:
3    int arrangeCoins(int n) {
4        long left = 0, right = n;
5        
6        while (left <= right) {
7            long mid = left + (right - left) / 2;
8            long coinsUsed = mid * (mid + 1) / 2;
9            
10            if (coinsUsed == n) {
11                return mid;
12            }
13            
14            if (n < coinsUsed) {
15                right = mid - 1; // Too many coins, look lower
16            } else {
17                left = mid + 1;  // We can afford this, try to find more rows
18            }
19        }
20        
21        return right; // 'right' will hold the maximum complete rows
22    }
23};