// Last updated: 30/07/2026, 10:06:23
class Solution {
public:
    int digitFrequencyScore(int n) {
       int sum = 0;
       while(n > 0 ){
        sum += n % 10;
        n /= 10;
       } 
       return sum ;
    }
};