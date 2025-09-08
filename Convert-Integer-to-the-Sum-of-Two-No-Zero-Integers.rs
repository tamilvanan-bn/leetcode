impl Solution {
    pub fn check_zeros(n: i32) -> bool {
        let mut num = n;
        while num > 0 {
            if num % 10 == 0 {
                return false;
            }
            num /= 10;
        }
        true
    }

    pub fn get_no_zero_integers(n: i32) -> Vec<i32> {
        (1..=n/2)
            .find(|&i| Self::check_zeros(i) && Self::check_zeros(n - i))
            .map(|i| vec![i, n - i])
            .unwrap_or(vec![0, 0])
    }
}