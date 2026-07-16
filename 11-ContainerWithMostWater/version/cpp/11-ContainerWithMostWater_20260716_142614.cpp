// Last updated: 16/07/2026, 14:26:14
1class Solution {
2public:
3    int maxArea(vector<int>& height) {
4        int maxWater = 0;
5        int left = 0;                       
6        int right = height.size() - 1;    
7
8        while (left < right) {
9            int width = right - left;
10            
11            int currentHeight = min(height[left], height[right]);
12        
13            int currentWater = width * currentHeight;
14            maxWater = max(maxWater, currentWater);
15           
16            if (height[left] < height[right]) {
17                left++;
18            } else {
19                right--;
20            }
21        }
22
23        return maxWater;
24    }
25};