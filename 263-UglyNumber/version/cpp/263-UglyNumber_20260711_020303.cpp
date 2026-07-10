// Last updated: 11/07/2026, 02:03:03
1class Solution {
2public:
3    bool isUgly(int n) {
4        // Ugly numbers must be positive integers
5        if (n <= 0) return false;
6        
7        // Divide by 2, 3, and 5 as much as possible
8        while (n % 2 == 0) n /= 2;
9        while (n % 3 == 0) n /= 3;
10        while (n % 5 == 0) n /= 5;
11        
12        // If the remaining number is 1, it's an ugly number
13        return n == 1;
14    }
15};