// Last updated: 30/07/2026, 10:08:45
var addBinary = function(a, b) {
    let carry = 0, result = '';
    let i = a.length - 1, j = b.length - 1;

    while (i >= 0 || j >= 0 || carry) {
        let sum = carry;
        if (i >= 0) sum += +a[i--]; // convert char to number
        if (j >= 0) sum += +b[j--];
        result = (sum % 2) + result; // current bit
        carry = Math.floor(sum / 2); // update carry
    }

    return result;
};