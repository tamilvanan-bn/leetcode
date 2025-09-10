use std::collections::BTreeSet;

impl Solution {
    pub fn max_sum(nums: Vec<i32>) -> i32 {
        let set: BTreeSet<_> = nums.into_iter().collect();
        let (mut pos, mut neg) = (0, -1 << 31);
        for &x in &set {
            if x > 0 {
                pos += x;
            } else {
                neg = neg.max(x);
            }
        }
        if pos > 0 { pos } else { neg }
    }
}
