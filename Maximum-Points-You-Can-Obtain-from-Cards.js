/**
 * @param {number[]} cardPoints
 * @param {number} k
 * @return {number}
 */
var maxScore = function(arr, k) {
    let lSum = 0, rSum = 0, ans = 0, rIndex = arr.length - 1;
    
    for (let i = 0; i < k; i++) {
        lSum += arr[i];
    }
    
    ans = lSum;

    for (let i = k - 1; i >= 0; i--) {
        lSum -= arr[i];
        rSum += arr[rIndex--];
        ans = Math.max(ans, lSum + rSum);
    }
    
    return ans;
};