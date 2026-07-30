// Last updated: 30/07/2026, 10:06:48
// class Solution {
// public: // ani ander je array aapayo chhe ena mathi je anko aapya chhe emathi je 2 anko eva levana k jemani vachhe no diffrent e 1 hoy and aapade evo array create karavano and eni ander jetala anko chhe etalo ans aavavo joie .  
//     int findLHS(vector<int>& nums) {
        
//     }
// };

class Solution {
public:
    int findLHS(vector<int>& nums) {
        sort(nums.begin(),nums.end());

        int r=1;
        int l=0;
        int length=0;

        while(r<nums.size()){

            int diff=nums[r]-nums[l];

            if(diff==1){
              
                length=max(length,r-l+1);
                  r++;
            }
            else if(diff<1){
                r++;
            }
            else{
                l++;
            }
        }
        return length;
    }
};