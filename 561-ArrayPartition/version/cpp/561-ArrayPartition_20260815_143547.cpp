// Last updated: 15/08/2026, 14:35:47
1#include <vector>
2#include <algorithm>
3
4class Solution {
5public:
6    int arrayPairSum(std::vector<int>& nums) {
7        std::sort(nums.begin(), nums.end());
8        int sum = 0;
9        for (int i = 0; i < nums.size(); i += 2) {
10            sum += nums[i];
11        }
12        return sum;
13    }
14};