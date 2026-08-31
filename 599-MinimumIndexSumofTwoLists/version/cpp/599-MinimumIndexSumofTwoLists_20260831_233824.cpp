// Last updated: 31/08/2026, 23:38:24
1class Solution {
2public:
3    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
4        unordered_map<string, int> index_map;
5        for (int i = 0; i < list1.size(); ++i) {
6            index_map[list1[i]] = i;
7        }
8
9        vector<string> result;
10        int min_sum = INT_MAX;
11
12        for (int j = 0; j < list2.size(); ++j) {
13            if (index_map.count(list2[j])) {
14                int sum = j + index_map[list2[j]];
15                
16                if (sum < min_sum) {
17                    min_sum = sum;
18                    result.clear();
19                    result.push_back(list2[j]);
20                } else if (sum == min_sum) {
21                    result.push_back(list2[j]);
22                }
23            }
24        }
25
26        return result;
27    }
28};