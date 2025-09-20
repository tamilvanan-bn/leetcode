impl Solution {
    pub fn combine(n: i32, k: i32) -> Vec<Vec<i32>> {
        let mut ans: Vec<Vec<i32>> = Vec::new();
        let mut comb: Vec<i32> = Vec::new();

        fn backtrack(start: i32, comb: &mut Vec<i32>, k: i32, n: i32, ans: &mut Vec<Vec<i32>>) {
            if comb.len() == k as usize {
                ans.push(comb.clone());
                return;
            }

            for i in start..=n {
                comb.push(i);
                backtrack(i + 1, comb, k, n, ans);
                comb.pop();
            }
        }
        backtrack(1, &mut comb, k, n, &mut ans);
        return ans;
    }
}