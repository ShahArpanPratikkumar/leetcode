// Last updated: 30/07/2026, 10:08:48
var lengthOfLastWord = function(s) {
    let length = 0;
    let i = s.length - 1;
    
    // Skip trailing spaces
    while (i >= 0 && s[i] === ' ') i--;
    
    // Count letters of last word
    while (i >= 0 && s[i] !== ' ') {
        length++;
        i--;
    }
    
    return length;
};