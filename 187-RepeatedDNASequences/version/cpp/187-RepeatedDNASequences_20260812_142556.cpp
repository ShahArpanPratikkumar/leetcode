// Last updated: 12/08/2026, 14:25:56
1class Solution {
2public:
3    vector<string> findRepeatedDnaSequences(string s) {
4        unordered_set<string> seen;
5        unordered_set<string> repeated;
6        
7        if (s.length() < 10) {
8            return {};
9        }
10        
11        for (int i = 0; i <= static_cast<int>(s.length()) - 10; ++i) {
12            string sub = s.substr(i, 10);
13            if (seen.count(sub)) {
14                repeated.insert(sub);
15            } else {
16                seen.insert(sub);
17            }
18        }
19        
20        return vector<string>(repeated.begin(), repeated.end());
21    }
22};