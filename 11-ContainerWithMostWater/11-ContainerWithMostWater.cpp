// Last updated: 30/07/2026, 10:09:04
class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxWater = 0;
        int left = 0;                       
        int right = height.size() - 1;    

        while (left < right) {
            int width = right - left;
            
            int currentHeight = min(height[left], height[right]);
        
            int currentWater = width * currentHeight;
            maxWater = max(maxWater, currentWater);
           
            if (height[left] < height[right]) {
                left++;
            } else {
                right--;
            }
        }

        return maxWater;
    }
};