/**
 * @param {string} s
 * @return {boolean}
 */
var hasSameDigits = function(s) {
    while (s.length > 2) {
        let next = [];
        for (let i = 0; i < s.length - 1; i++) {
            let a = s[i] - '0', b = s[i + 1] - '0';
            next.push((a + b) % 10);
        }
        s = next.join('');
    }
    return s[0] === s[1];
};