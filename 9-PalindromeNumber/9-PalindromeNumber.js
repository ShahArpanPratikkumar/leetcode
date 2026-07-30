// Last updated: 30/07/2026, 10:09:14
/**
 * @param {number} x
 * @return {boolean}
 */
var isPalindrome = function(x) {
    // Negative numbers and numbers ending with 0 (except 0 itself) are not palindrome
    if (x < 0 || (x % 10 === 0 && x !== 0)) return false;

    let reversed = 0;
    let original = x;

    while (x > 0) {
        let digit = x % 10;
        reversed = reversed * 10 + digit;
        x = Math.floor(x / 10);
    }

    return original === reversed;
};