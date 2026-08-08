// Last updated: 08/08/2026, 09:09:58
1class Solution {
2public:
3    vector<int> validSequence(string word1, string word2) {
4        int n = word1.size();
5        int m = word2.size();
6
7        vector<int> last_match(m, -1);
8        int j = m - 1;
9        for (int i = n - 1; i >= 0 && j >= 0; i--) {
10            if (word1[i] == word2[j]) {
11                last_match[j] = i;
12                j--;
13            }
14        }
15
16        vector<int> result;
17        bool changed = false;
18        j = 0;
19
20        for (int i = 0; i < n && j < m; i++) {
21            if (word1[i] == word2[j]) {
22                result.push_back(i);
23                j++;
24            } 
25            else if (!changed) {
26                if (j == m - 1 || last_match[j + 1] > i) {
27                    result.push_back(i);
28                    changed = true;
29                    j++;
30                }
31            }
32        }
33
34        return result.size() == m ? result : vector<int>();
35    }
36};