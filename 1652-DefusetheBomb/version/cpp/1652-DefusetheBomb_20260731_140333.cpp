// Last updated: 31/07/2026, 14:03:33
1class Solution {
2public:
3    vector<int> decrypt(vector<int>& code, int k) {
4        int n = code.size();
5        vector<int> result(n, 0);
6
7        if (k == 0) return result;
8
9        // Window boundaries setup
10        int left = 1, right = k;
11        if (k < 0) {
12            left = n + k;
13            right = n - 1;
14        }
15
16        // Initial window sum calculation
17        int currentSum = 0;
18        for (int i = left; i <= right; ++i) {
19            currentSum += code[i];
20        }
21
22        // Sliding window across circular array
23        for (int i = 0; i < n; ++i) {
24            result[i] = currentSum;
25            currentSum -= code[left % n];
26            currentSum += code[(right + 1) % n];
27            left++;
28            right++;
29        }
30
31        return result;
32    }
33};