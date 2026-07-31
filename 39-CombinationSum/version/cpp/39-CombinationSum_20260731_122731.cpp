// Last updated: 31/07/2026, 12:27:31
1class Solution {
2public:
3    vector<vector<int>> result;
4
5    void backtrack(vector<int>& candidates, int target, vector<int>& current, int index) {
6        if (target == 0) {
7            result.push_back(current);
8            return;
9        }
10
11        for (int i = index; i < candidates.size(); i++) {
12            if (candidates[i] <= target) {
13                current.push_back(candidates[i]);
14                backtrack(candidates, target - candidates[i], current, i);
15                current.pop_back(); // Backtrack
16            }
17        }
18    }
19
20    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
21        vector<int> current;
22        backtrack(candidates, target, current, 0);
23        return result;
24    }
25};