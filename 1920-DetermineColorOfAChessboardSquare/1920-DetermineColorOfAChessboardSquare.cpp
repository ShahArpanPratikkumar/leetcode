// Last updated: 30/07/2026, 10:06:30
class Solution {
public:
    bool squareIsWhite(string coordinates) {
     int col = coordinates[0] - 'a' + 1;
     int row = coordinates[1] - 0;

     return (col + row) % 2 == 1 ;  

    }
};