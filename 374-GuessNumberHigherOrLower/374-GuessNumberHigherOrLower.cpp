// Last updated: 30/07/2026, 10:07:20
/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        int low = 1, high = n;
        
        while (low <= high) {
            int mid = low + (high - low) / 2;
            int res = guess(mid);
            
            if (res == 0) {
                return mid; // Found the correct number!
            } else if (res == -1) {
                high = mid - 1; // The pick is lower, guess smaller
            } else {
                low = mid + 1;  // The pick is higher, guess larger
            }
        }
        
        return -1;
    }
};