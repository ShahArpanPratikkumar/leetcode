// Last updated: 30/07/2026, 10:08:55
/**
 * @param {string} haystack
 * @param {string} needle
 * @return {number}
 */
var strStr = function(haystack, needle) {
    let n = haystack.length;
    let m = needle.length;

    for (let i = 0; i <= n - m; i++) {
        if (haystack.substring(i, i + m) === needle) {
            return i;
        }
    }

    return -1;
};