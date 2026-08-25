// Last updated: 25/08/2026, 10:36:45
1class Solution {
2public:
3    int maxNumberOfFamilies(int n, vector<vector<int>>& reservedSeats) {
4        unordered_map<int, int> rowMasks;
5        
6        // Track reserved seats for middle columns (2 through 9) using bitmask
7        for (const auto& seat : reservedSeats) {
8            int row = seat[0];
9            int col = seat[1];
10            
11            // Only columns 2-9 affect group placement
12            if (col >= 2 && col <= 9) {
13                rowMasks[row] |= (1 << (col - 2));
14            }
15        }
16        
17        // Each unreserved row can seat up to 2 groups
18        int maxGroups = (n - rowMasks.size()) * 2;
19        
20        // Bitmasks for the 3 possible block placements (relative to cols 2-9, 0-indexed):
21        // Left block:   cols 2, 3, 4, 5  -> bits 0, 1, 2, 3  -> 0b00001111 (15)
22        // Middle block: cols 4, 5, 6, 7  -> bits 2, 3, 4, 5  -> 0b00111100 (60)
23        // Right block:  cols 6, 7, 8, 9  -> bits 4, 5, 6, 7  -> 0b11110000 (240)
24        int leftMask = 15;
25        int middleMask = 60;
26        int rightMask = 240;
27        
28        for (const auto& [row, mask] : rowMasks) {
29            bool leftFree = (mask & leftMask) == 0;
30            bool rightFree = (mask & rightMask) == 0;
31            bool middleFree = (mask & middleMask) == 0;
32            
33            if (leftFree && rightFree) {
34                maxGroups += 2;
35            } else if (leftFree || rightFree || middleFree) {
36                maxGroups += 1;
37            }
38        }
39        
40        return maxGroups;
41    }
42};