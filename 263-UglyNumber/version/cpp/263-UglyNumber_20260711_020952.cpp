// Last updated: 11/07/2026, 02:09:52
1class Solution {
2public:
3    int missingNumber(vector<int>& nums) {
4        int n = nums.size();
5        
6        // Calculate the expected sum of numbers from 0 to n
7        int expectedSum = n * (n + 1) / 2;
8        
9        // Calculate the actual sum of elements in the array
10        int actualSum = 0;
11        for (int num : nums) {
12            actualSum += num;
13        }
14        
15        // The difference is the missing number
16        return expectedSum - actualSum;
17    }
18};