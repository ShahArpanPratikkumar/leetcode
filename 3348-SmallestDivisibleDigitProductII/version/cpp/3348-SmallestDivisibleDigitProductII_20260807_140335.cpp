// Last updated: 07/08/2026, 14:03:35
1#include <string>
2#include <vector>
3#include <algorithm>
4
5using namespace std;
6
7class Solution {
8    struct Factors {
9        int c2 = 0, c3 = 0, c5 = 0, c7 = 0;
10    };
11
12    Factors getFactors(long long t) {
13        Factors f;
14        while (t % 2 == 0) { f.c2++; t /= 2; }
15        while (t % 3 == 0) { f.c3++; t /= 3; }
16        while (t % 5 == 0) { f.c5++; t /= 5; }
17        while (t % 7 == 0) { f.c7++; t /= 7; }
18        if (t > 1) return {-1, -1, -1, -1};
19        return f;
20    }
21
22    Factors removeDigit(Factors f, int d) {
23        if (d == 2) f.c2--;
24        else if (d == 3) f.c3--;
25        else if (d == 4) f.c2 -= 2;
26        else if (d == 5) f.c5--;
27        else if (d == 6) { f.c2--; f.c3--; }
28        else if (d == 7) f.c7--;
29        else if (d == 8) f.c2 -= 3;
30        else if (d == 9) f.c3 -= 2;
31        return f;
32    }
33
34    // Helper to dynamically build the shortest/smallest sequence of digits for remaining prime powers
35    string getMinDigits(Factors f) {
36        int c2 = max(0, f.c2);
37        int c3 = max(0, f.c3);
38        int c5 = max(0, f.c5);
39        int c7 = max(0, f.c7);
40
41        string res = "";
42        res.append(c7, '7');
43        res.append(c5, '5');
44
45        // Greedily combine 3s into 9s and 2s into 8s
46        res.append(c3 / 2, '9');
47        c3 %= 2;
48
49        res.append(c2 / 3, '8');
50        c2 %= 3;
51
52        // Handle leftovers (c2 < 3, c3 < 2)
53        if (c2 == 2 && c3 == 1) {
54            res += "26"; // 2 * 6 = 12 (represents 2^2 * 3^1)
55        } else if (c2 == 2 && c3 == 0) {
56            res += "4";  // 2^2
57        } else if (c2 == 1 && c3 == 1) {
58            res += "6";  // 2 * 3
59        } else if (c2 == 1 && c3 == 0) {
60            res += "2";
61        } else if (c2 == 0 && c3 == 1) {
62            res += "3";
63        }
64
65        sort(res.begin(), res.end());
66        return res;
67    }
68
69public:
70    string smallestNumber(string num, long long t) {
71        Factors targetF = getFactors(t);
72        if (targetF.c2 == -1) return "-1";
73
74        int n = num.length();
75        vector<Factors> prefF(n + 1);
76        prefF[0] = targetF;
77
78        int firstZero = -1;
79        for (int i = 0; i < n; i++) {
80            if (num[i] == '0') {
81                firstZero = i;
82                break;
83            }
84            prefF[i + 1] = removeDigit(prefF[i], num[i] - '0');
85        }
86
87        // Check if num itself (if zero-free) already satisfies t
88        if (firstZero == -1) {
89            string minSuff = getMinDigits(prefF[n]);
90            if (minSuff.empty()) return num;
91        }
92
93        int maxMatch = (firstZero == -1) ? n - 1 : firstZero;
94
95        // Try changing digit at index i to something strictly larger than num[i]
96        for (int i = maxMatch; i >= 0; i--) {
97            int startDigit = (num[i] - '0') + 1;
98            Factors curF = prefF[i];
99
100            for (int d = startDigit; d <= 9; d++) {
101                Factors nextF = removeDigit(curF, d);
102                string suff = getMinDigits(nextF);
103                int remLen = n - 1 - i;
104
105                if ((int)suff.length() <= remLen) {
106                    string res = num.substr(0, i);
107                    res += to_string(d);
108                    res.append(remLen - suff.length(), '1');
109                    res += suff;
110                    return res;
111                }
112            }
113        }
114
115        // If no valid number of length n exists, create minimal valid number of length n + 1 (or longer if needed)
116        string suff = getMinDigits(targetF);
117        int targetLen = max(n + 1, (int)suff.length());
118        string res = "";
119        res.append(targetLen - suff.length(), '1');
120        res += suff;
121
122        return res;
123    }
124};