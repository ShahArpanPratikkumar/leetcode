// Last updated: 09/06/2026, 15:01:34
1class Solution {
2public:
3    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {
4        vector<int> ans;
5
6        for (int x : order) {
7            for (int f : friends) {
8                if (x == f){
9                    ans.push_back(x);
10                    break;
11                }
12            }
13        }
14        return ans;
15    }
16};