// Last updated: 30/07/2026, 10:08:42
var climbStairs = function(n) {
    if (n <= 2) return n;
    
    let a = 1, b = 2;
    for (let i = 3; i <= n; i++) {
        [a, b] = [b, a + b]; // update a and b
    }
    
    return b;
};