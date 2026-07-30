// Last updated: 30/07/2026, 10:07:40
class Solution {
public:
    bool isUgly(int n) {
        // Ugly numbers must be positive integers
        if (n <= 0) return false;
        
        // Divide by 2, 3, and 5 as much as possible
        while (n % 2 == 0) n /= 2;
        while (n % 3 == 0) n /= 3;
        while (n % 5 == 0) n /= 5;
        
        // If the remaining number is 1, it's an ugly number
        return n == 1;
    }
};