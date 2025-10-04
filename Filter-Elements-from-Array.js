/**
 * @param {number[]} arr
 * @param {Function} fn
 * @return {number[]}
 */
var filter = function (arr, fn) {
    const res = new Array();
    arr.forEach((val, i) => {
        if (fn(val, i)) {
            res.push(val);
        }
    });
    return res;
};