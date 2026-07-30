// Last updated: 30/07/2026, 10:06:19
class Solution {
public:
    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {
        vector<int> ans;

        for (int x : order){
            for (int f : friends){
                if( x == f){
                    ans.push_back(x);
                }
            }

        }
        return ans ;
    }
};