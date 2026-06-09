// Last updated: 09/06/2026, 20:35:31
1class Solution {
2public:
3    bool isPalindrome(int x) {
4        // Negative numbers are not palindromes
5        // Numbers ending with 0 (except 0 itself) cannot be palindromes
6        if (x < 0 || (x % 10 == 0 && x != 0))
7            return false;
8
9        int reversedHalf = 0;
10
11        while (x > reversedHalf) {
12            reversedHalf = reversedHalf * 10 + x % 10;
13            x /= 10;
14        }
15
16        // Even digits: x == reversedHalf
17        // Odd digits: x == reversedHalf / 10 (middle digit ignored)
18        return (x == reversedHalf || x == reversedHalf / 10);
19    }
20};