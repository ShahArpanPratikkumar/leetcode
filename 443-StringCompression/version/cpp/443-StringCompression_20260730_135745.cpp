// Last updated: 30/07/2026, 13:57:45
1class Solution {
2public:
3    int compress(vector<char>& chars) {
4        int write = 0;
5        int read = 0;
6        int n = chars.size();
7
8        while (read < n) {
9            char currentChar = chars[read];
10            int count = 0;
11
12            // Count occurrences of current character
13            while (read < n && chars[read] == currentChar) {
14                read++;
15                count++;
16            }
17
18            // Write character to array
19            chars[write++] = currentChar;
20
21            // Write count if greater than 1
22            if (count > 1) {
23                string countStr = to_string(count);
24                for (char c : countStr) {
25                    chars[write++] = c;
26                }
27            }
28        }
29
30        return write;
31    }
32};