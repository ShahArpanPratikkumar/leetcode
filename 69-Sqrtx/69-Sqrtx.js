// Last updated: 30/07/2026, 10:08:44
var mySqrt = function(x) {
    let left = 0, right = x;

    while (left <= right) {
        let mid = Math.floor((left + right) / 2);
        if (mid * mid === x) return mid;
        else if (mid * mid < x) left = mid + 1;
        else right = mid - 1;
    }

    return right; // right is the integer part of sqrt(x)
};