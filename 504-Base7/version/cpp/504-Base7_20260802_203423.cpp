// Last updated: 02/08/2026, 20:34:23
1class Solution {
2public:
3    string convertToBase7(int num) {
4        if (num == 0) return "0";
5        
6        bool isNegative = num < 0;
7        num = abs(num);
8        string result = "";
9        
10        while (num > 0) {
11            result = to_string(num % 7) + result;
12            num /= 7;
13        }
14        
15        return isNegative ? "-" + result : result;
16    }
17};