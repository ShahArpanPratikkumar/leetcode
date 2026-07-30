// Last updated: 30/07/2026, 10:09:01
/**
 * @param {string} s
 * @return {boolean}
 */
var isValid = function(s) {
    const stack = [];
    const map = {
        ')': '(',
        ']': '[',
        '}': '{'
    };

    for (let char of s) {
        if (map[char]) {
            if (stack.pop() !== map[char]) {
                return false;
            }
        } else {
            stack.push(char);
        }
    }

    return stack.length === 0;
};

console.log(isValid("()"));     
console.log(isValid("()[]{}"));  
console.log(isValid("(]"));      
console.log(isValid("([])"));   
console.log(isValid("([)]"));    