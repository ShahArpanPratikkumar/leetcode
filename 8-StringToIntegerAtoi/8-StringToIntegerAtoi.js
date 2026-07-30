// Last updated: 30/07/2026, 10:09:17
var myAtoi = function(s) {
    let i = 0;
    let n = s.length;

    while (i < n && s[i] === ' ') {
        i++;
    }

    let sign = 1;
    if (i < n && (s[i] === '+' || s[i] === '-')) {
        if (s[i] === '-') sign = -1;
        i++;
    }

    let result = 0;
    while (i < n && s[i] >= '0' && s[i] <= '9') {
        let digit = s[i] - '0';

        if (result > Math.floor((2**31 - 1 - digit) / 10)) {
            return sign === 1 ? 2**31 - 1 : -(2**31);
        }

        result = result * 10 + digit;
        i++;
    }

    return result * sign;
};

myAtoi("42")           
myAtoi("   -042")      
myAtoi("1337c0d3")     
myAtoi("0-1")         
myAtoi("words 987")    