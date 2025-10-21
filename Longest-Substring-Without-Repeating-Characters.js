/**
 * @param {string} s
 * @return {number}
 */
// .charCodeAt(0) gives the ascii value of the character
// Ref: https://www.youtube.com/watch?v=-zSxTJkcdAo
var lengthOfLongestSubstring = function (s) {
  let l = 0,
    r = 0,
    n = s.length,
    mx = 0,
    hash = new Array(256).fill(-1);
    while (r < n) {
        if (hash[s[r].charCodeAt(0)] != -1) {
            if (hash[s[r].charCodeAt(0)] >= l) {
                l = hash[s[r].charCodeAt(0)] + 1;
            }
        }
        const len = r - l + 1;
        mx = Math.max(len, mx);
        hash[s[r].charCodeAt(0)] = r++;
    }
    return mx;
};
