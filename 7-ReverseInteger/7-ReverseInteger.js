// Last updated: 30/07/2026, 10:09:20
function reverse(x) {
    let sign = x < 0 ? -1 : 1;
    let reversed = parseInt(Math.abs(x).toString().split('').reverse().join('')) * sign;

    // 32-bit integer range check
    if (reversed < -(2**31) || reversed > (2**31 - 1)) {
        return 0;
    }

    return reversed;
}

console.log(reverse(123));  
console.log(reverse(-123));  
console.log(reverse(120));   