// Last updated: 13/08/2026, 16:15:52
1class Solution {
2public:
3    int subarraysDivByK(vector<int>& nums, int k) {
4        vector<int> remainderCount(k, 0);
5        
6        remainderCount[0] = 1;
7        
8        int runningSum = 0;
9        int result = 0;
10        
11        for (int num : nums) {
12            runningSum += num;
13            
14            int remainder = (runningSum % k + k) % k;
15            
16            result += remainderCount[remainder];
17            
18            remainderCount[remainder]++;
19        }
20        
21        return result;
22    }
23};