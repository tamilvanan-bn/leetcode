/**
 * @param {number} n
 * @return {number}
 */
var totalMoney = function(n) {
    let mon = 1, count = 0, ans = 0;
    while (count < n) {
        let oneWeek = 1, tempMon = mon;
        while(oneWeek <= 7 && count < n) {
            ans += tempMon;
            tempMon++;
            count++;
            oneWeek++;
        }
        mon++;
    }
    return ans;
};