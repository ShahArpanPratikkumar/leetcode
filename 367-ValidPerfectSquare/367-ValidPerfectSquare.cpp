// Last updated: 30/07/2026, 10:07:22
class Solution {
public:
    bool isPerfectSquare(int num) {
        long long odd = 1;
        while (num > 0) {
            num -= odd;
            odd += 2;
        }
        return num == 0;
    }
};