// Last updated: 22/07/2026, 21:15:05
1class Solution {
2public:
3    string addStrings(string num1, string num2) {
4        string result = "";
5        int i = num1.length() - 1;
6        int j = num2.length() - 1;
7        int carry = 0;
8
9        // Process digits from right to left
10        while (i >= 0 || j >= 0 || carry > 0) {
11            int sum = carry;
12
13            if (i >= 0) {
14                sum += num1[i] - '0';
15                i--;
16            }
17
18            if (j >= 0) {
19                sum += num2[j] - '0';
20                j--;
21            }
22
23            carry = sum / 10;
24            result.push_back((sum % 10) + '0');
25        }
26
27        // Reverse the string to get the correct order
28        reverse(result.begin(), result.end());
29
30        return result;
31    }
32};