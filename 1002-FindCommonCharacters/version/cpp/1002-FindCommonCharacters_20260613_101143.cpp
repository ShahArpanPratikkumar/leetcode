// Last updated: 13/06/2026, 10:11:43
1class Solution {
2public:
3    vector<string> commonChars(vector<string>& words) {
4        vector<string> ans;
5
6        string first = words[0];
7
8        for (char ch : first) {
9            bool found = true;
10
11            for (int i = 1; i < words.size(); i++) {
12                int pos = words[i].find(ch);
13
14                if (pos == string::npos) {
15                    found = false;
16                    break;
17                }
18
19                words[i].erase(pos, 1); // remove used character
20            }
21
22            if (found) {
23                ans.push_back(string(1, ch));
24            }
25        }
26
27        return ans;
28    }
29};