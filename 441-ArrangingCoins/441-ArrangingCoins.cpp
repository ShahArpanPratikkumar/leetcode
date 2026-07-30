// Last updated: 30/07/2026, 10:07:00
class Solution {
public:
    int arrangeCoins(int n) {
        long left = 0, right = n;
        
        while (left <= right) {
            long mid = left + (right - left) / 2;
            long coinsUsed = mid * (mid + 1) / 2;
            
            if (coinsUsed == n) {
                return mid;
            }
            
            if (n < coinsUsed) {
                right = mid - 1; // Too many coins, look lower
            } else {
                left = mid + 1;  // We can afford this, try to find more rows
            }
        }
        
        return right; // 'right' will hold the maximum complete rows
    }
};