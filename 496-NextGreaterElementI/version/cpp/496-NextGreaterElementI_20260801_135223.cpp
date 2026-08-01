// Last updated: 01/08/2026, 13:52:23
1class Solution {
2public:
3    vector<string> findWords(vector<string>& words) {
4        // Map each letter ('a' to 'z') to its row number (1, 2, or 3)
5        int rowMap[26] = {
6            2, 3, 3, 2, 1, 2, 2, 2, 1, 2, 2, 2, 3, // a-m
7            3, 1, 1, 1, 1, 2, 1, 1, 3, 1, 3, 1, 3  // n-z
8        };
9
10        vector<string> result;
11
12        for (const string& word : words) {
13            int targetRow = rowMap[tolower(word[0]) - 'a'];
14            bool isValid = true;
15
16            for (char c : word) {
17                if (rowMap[tolower(c) - 'a'] != targetRow) {
18                    isValid = false;
19                    break;
20                }
21            }
22
23            if (isValid) {
24                result.push_back(word);
25            }
26        }
27
28        return result;
29    }
30};