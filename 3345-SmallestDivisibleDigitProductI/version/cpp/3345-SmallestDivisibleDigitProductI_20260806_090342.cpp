// Last updated: 06/08/2026, 09:03:42
1class Solution {
2private:
3    int getDigitProduct(int num) {
4        int prod = 1;
5        while (num > 0) {
6            prod *= (num % 10);
7            num /= 10;
8        }
9        return prod;
10    }
11
12public:
13    int smallestNumber(int n, int t) {
14        while (getDigitProduct(n) % t != 0) {
15            n++;
16        }
17        return n;
18    }
19};