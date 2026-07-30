// Last updated: 30/07/2026, 10:09:24
/**
 * @param {string} s
 * @param {number} numRows
 * @return {string}
 */
var convert = function(s, numRows) {
    if (numRows === 1) return s;

    let rows = Array(numRows).fill("");
    let i = 0;
    let step = 1;

    for (let char of s) {
        rows[i] += char;

        if (i === 0) step = 1;
        if (i === numRows - 1) step = -1;

        i += step;
    }

    return rows.join("");
};