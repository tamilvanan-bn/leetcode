class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int ans = 0, q = 1;
        if (numExchange <= numBottles) {
            ans = numBottles;
        } else {
            return numBottles;
        }
        while (q != 0) {
            q = numBottles / numExchange; 
            int r = numBottles % numExchange;
            ans += q;
            numBottles = q + r;
        }
        return ans;
    }
};