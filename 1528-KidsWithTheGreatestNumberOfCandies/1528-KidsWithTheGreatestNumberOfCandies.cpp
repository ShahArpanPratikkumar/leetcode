// Last updated: 30/07/2026, 10:06:34
class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
      
        int count = *max_element(candies.begin(), candies.end()); 
        vector<bool> ans;
        
        for (int i = 0; i < candies.size(); i++) {
          
            if (candies[i] + extraCandies >= count) {
                ans.push_back(true);
            } else {
                ans.push_back(false);
            }
        }
        
        return ans;
    }
};