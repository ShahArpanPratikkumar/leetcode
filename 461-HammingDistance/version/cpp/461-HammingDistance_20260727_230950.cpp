// Last updated: 27/07/2026, 23:09:50
1class Solution {
2public:
3    int hammingDistance(int x, int y) {
4        int xorVal = x ^ y;
5        int distance = 0;
6        
7        while (xorVal > 0) {
8            if (xorVal & 1) {
9                distance++;
10            }
11            xorVal >>= 1;
12        }
13        
14        return distance;
15    }
16};