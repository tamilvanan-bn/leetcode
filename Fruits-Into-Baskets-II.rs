impl Solution {
    pub fn num_of_unplaced_fruits(fruits: Vec<i32>, baskets: Vec<i32>) -> i32 {
        let (n, mut ans) = (fruits.len(), 0);
        let mut f = fruits;
        let mut b = baskets;
        for i in 0..n {
            for j in 0..n {
                if f[i] != -1 && b[j] != -1 && f[i] <= b[j] {
                    f[i] = -1;
                    b[j] = -1;
                }
            }
        }
        for i in 0..n {
            if f[i] != -1 {
                ans += 1;
            }
        }
        ans
    }
}