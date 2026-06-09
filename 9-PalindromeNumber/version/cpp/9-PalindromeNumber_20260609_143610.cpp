// Last updated: 09/06/2026, 14:36:10
1class Solution {
2public:
3    bool isPalindrome(int x) {
4        // Negative numbers and numbers ending with 0
5        // (except 0 itself) cannot be palindromes
6        if (x < 0 || (x % 10 == 0 && x != 0)) {
7            return false;
8        }
9
10        int reversedHalf = 0;
11
12        while (x > reversedHalf) {
13            reversedHalf = reversedHalf * 10 + x % 10;
14            x /= 10;
15        }
16
17        // For even digits: x == reversedHalf
18        // For odd digits: x == reversedHalf / 10
19        return (x == reversedHalf || x == reversedHalf / 10);
20    }
21};