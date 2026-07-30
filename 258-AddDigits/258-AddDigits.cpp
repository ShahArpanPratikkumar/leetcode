// Last updated: 30/07/2026, 10:07:41
class Solution {
public:
    int addDigits(int num) {
        if (num == 0) {
            return 0;
        }
        if (num % 9 == 0) {
            return 9;
        }
        return num % 9;
    }
};