// Last updated: 30/09/2026, 10:21:52
1class Solution {
2public:
3    vector<int> maxDepthAfterSplit(string seq) {
4        vector<int> ans(seq.length());
5        int depth = 0;
6        
7        for (int i = 0; i < seq.length(); ++i) {
8            if (seq[i] == '(') {
9                depth++;
10                ans[i] = depth % 2;
11            } else {
12                ans[i] = depth % 2;
13                depth--;
14            }
15        }
16        
17        return ans;
18    }
19};