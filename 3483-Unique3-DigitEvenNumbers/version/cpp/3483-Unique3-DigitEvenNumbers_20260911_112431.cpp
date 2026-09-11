// Last updated: 11/09/2026, 11:24:31
1class Solution {
2public:
3    int totalNumbers(vector<int>& digits) {
4        // Frequency array for available digits
5        vector<int> freq(10, 0);
6        for (int d : digits) {
7            freq[d]++;
8        }
9
10        int count = 0;
11
12        // Iterate through all 3-digit even numbers (100 to 998)
13        for (int num = 100; num <= 998; num += 2) {
14            int d1 = num / 100;       // Hundreds digit
15            int d2 = (num / 10) % 10; // Tens digit
16            int d3 = num % 10;        // Units digit
17
18            vector<int> req(10, 0);
19            req[d1]++;
20            req[d2]++;
21            req[d3]++;
22
23            // Verify if required digit frequencies are satisfied
24            bool canForm = true;
25            for (int i = 0; i < 10; i++) {
26                if (req[i] > freq[i]) {
27                    canForm = false;
28                    break;
29                }
30            }
31
32            if (canForm) {
33                count++;
34            }
35        }
36
37        return count;
38    }
39};