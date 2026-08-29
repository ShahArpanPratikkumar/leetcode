// Last updated: 29/08/2026, 20:53:08
1class Solution {
2public:
3    vector<int> lexicographicallySmallestArray(vector<int>& nums, int limit) {
4        int n = nums.size();
5        
6        // Pair elements with their original indices
7        vector<pair<int, int>> pairs(n);
8        for (int i = 0; i < n; ++i) {
9            pairs[i] = {nums[i], i};
10        }
11        
12        // Sort pairs primarily by value
13        sort(pairs.begin(), pairs.end());
14        
15        vector<int> result(n);
16        
17        // Group connected elements and place them in order
18        for (int i = 0; i < n; ) {
19            int j = i;
20            vector<int> indices;
21            
22            // Find the contiguous group of values with adjacent difference <= limit
23            while (j < n && (j == i || pairs[j].first - pairs[j - 1].first <= limit)) {
24                indices.push_back(pairs[j].second);
25                j++;
26            }
27            
28            // Sort original indices to place smaller elements in earlier positions
29            sort(indices.begin(), indices.end());
30            
31            // Assign sorted values of the group to sorted indices
32            for (int k = 0; k < indices.size(); ++k) {
33                result[indices[k]] = pairs[i + k].first;
34            }
35            
36            i = j; // Move to the next group
37        }
38        
39        return result;
40    }
41};