// Last updated: 30/07/2026, 10:06:55
class Solution {
public:
    int hammingDistance(int x, int y) {
        int xorVal = x ^ y;
        int distance = 0;
        
        while (xorVal > 0) {
            if (xorVal & 1) {
                distance++;
            }
            xorVal >>= 1;
        }
        
        return distance;
    }
};