// Last updated: 30/07/2026, 10:08:04
class Solution {
public:
    int hammingWeight(int n) {
        int count = 0;
        while (n != 0) {
            // This operation clears the lowest set bit
            n &= (n - 1);
            count++;
        }
        return count;
    }
};