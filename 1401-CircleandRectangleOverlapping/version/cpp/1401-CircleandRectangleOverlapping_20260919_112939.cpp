// Last updated: 19/09/2026, 11:29:39
1class Solution {
2public:
3    bool checkOverlap(int radius, int xCenter, int yCenter, int x1, int y1, int x2, int y2) {
4        // Find the closest point inside or on the boundary of the rectangle
5        int nearestX = std::max(x1, std::min(xCenter, x2));
6        int nearestY = std::max(y1, std::min(yCenter, y2));
7        
8        // Calculate the squared distance between the circle's center and the nearest point
9        int dx = xCenter - nearestX;
10        int dy = yCenter - nearestY;
11        
12        return (dx * dx + dy * dy) <= (radius * radius);
13    }
14};