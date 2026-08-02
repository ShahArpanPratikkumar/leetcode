// Last updated: 02/08/2026, 20:35:56
1class Solution {
2public:
3    vector<string> findRelativeRanks(vector<int>& score) {
4        int n = score.size();
5        
6        // Store pairs of (score, original_index)
7        vector<pair<int, int>> sortedScores(n);
8        for (int i = 0; i < n; ++i) {
9            sortedScores[i] = {score[i], i};
10        }
11        
12        // Sort in descending order of scores
13        sort(sortedScores.rbegin(), sortedScores.rend());
14        
15        vector<string> result(n);
16        
17        // Assign ranks based on sorted position
18        for (int rank = 0; rank < n; ++rank) {
19            int originalIndex = sortedScores[rank].second;
20            
21            if (rank == 0) {
22                result[originalIndex] = "Gold Medal";
23            } else if (rank == 1) {
24                result[originalIndex] = "Silver Medal";
25            } else if (rank == 2) {
26                result[originalIndex] = "Bronze Medal";
27            } else {
28                result[originalIndex] = to_string(rank + 1);
29            }
30        }
31        
32        return result;
33    }
34};