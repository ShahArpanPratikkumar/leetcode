// Last updated: 15/08/2026, 14:32:40
1#include <vector>
2#include <numeric>
3#include <algorithm>
4
5class Solution {
6public:
7    int longestSubsequence(std::vector<int>& nums) {
8        int total_xor = 0;
9        bool has_non_zero = false;
10        
11        for (int x : nums) {
12            total_xor ^= x;
13            if (x != 0) {
14                has_non_zero = true;
15            }
16        }
17        
18        if (total_xor != 0) {
19            return nums.size();
20        }
21        
22        return has_non_zero ? nums.size() - 1 : 0;
23    }
24};