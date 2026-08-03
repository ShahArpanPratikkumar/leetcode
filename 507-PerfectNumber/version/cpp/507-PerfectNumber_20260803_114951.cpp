// Last updated: 03/08/2026, 11:49:51
1class Solution {
2public:
3    bool checkPerfectNumber(int num) {
4        if (num <= 1) return false;
5        
6        int sum = 1; 
7        
8        for (int i = 2; i * i <= num; ++i) {
9            if (num % i == 0) {
10                sum += i;
11                if (i * i != num) {
12                    sum += num / i;
13                }
14            }
15        }
16        
17        return sum == num;
18    }
19};