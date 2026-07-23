// Last updated: 23/07/2026, 14:40:16
1class Solution {
2public:
3    vector<int> decompressRLElist(vector<int>& nums) {
4        vector<int> ans;
5
6        for(int i=0 ; i < nums.size()-1 ; i+=2){
7            for(int j = 0 ; j < nums[i] ; j++){
8                ans.push_back(nums[i+1]);
9            }
10        }
11        return ans;
12    }
13};