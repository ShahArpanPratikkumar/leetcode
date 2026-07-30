// Last updated: 30/07/2026, 10:06:53
class Solution {
public:
    int findComplement(int num) {
        int temp = num;
        unsigned int mask = 0;
    
        while (temp > 0) {
            mask = (mask << 1) | 1;
            temp >>= 1;
        }
        return num ^ mask;
    }
};