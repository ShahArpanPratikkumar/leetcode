// Last updated: 13/06/2026, 10:26:40
1class Solution {
2public:
3    int digitFrequencyScore(int n) {
4       int sum = 0;
5       while(n > 0 ){
6        sum += n % 10;
7        n /= 10;
8       } 
9       return sum ;
10    }
11};