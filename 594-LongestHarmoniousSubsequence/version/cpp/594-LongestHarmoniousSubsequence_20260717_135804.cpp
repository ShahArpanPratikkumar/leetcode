// Last updated: 17/07/2026, 13:58:04
1// class Solution {
2// public: // ani ander je array aapayo chhe ena mathi je anko aapya chhe emathi je 2 anko eva levana k jemani vachhe no diffrent e 1 hoy and aapade evo array create karavano and eni ander jetala anko chhe etalo ans aavavo joie .  
3//     int findLHS(vector<int>& nums) {
4        
5//     }
6// };
7
8class Solution {
9public:
10    int findLHS(vector<int>& nums) {
11        sort(nums.begin(),nums.end());
12
13        int r=1;
14        int l=0;
15        int length=0;
16
17        while(r<nums.size()){
18
19            int diff=nums[r]-nums[l];
20
21            if(diff==1){
22              
23                length=max(length,r-l+1);
24                  r++;
25            }
26            else if(diff<1){
27                r++;
28            }
29            else{
30                l++;
31            }
32        }
33        return length;
34    }
35};