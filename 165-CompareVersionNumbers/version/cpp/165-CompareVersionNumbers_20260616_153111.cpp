// Last updated: 16/06/2026, 15:31:11
1class Solution {
2public:
3    int compareVersion(string version1, string version2) {
4        int i = 0, j = 0;
5        
6        while (i < version1.length() || j < version2.length()) {
7            int num1 = 0, num2 = 0;
8            
9            while (i < version1.length() && version1[i] != '.') {
10                num1 = num1 * 10 + (version1[i++] - '0');
11            }
12            
13            while (j < version2.length() && version2[j] != '.') {
14                num2 = num2 * 10 + (version2[j++] - '0');
15            }
16            
17            if (num1 < num2) return -1;
18            if (num1 > num2) return 1;
19            
20            i++; 
21            j++;
22        }
23        
24        return 0;
25    }
26};