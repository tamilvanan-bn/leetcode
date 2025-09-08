impl Solution {
    pub fn number_of_pairs(points: Vec<Vec<i32>>) -> i32 {
        let (n, mut res, mut p) = (points.len(), 0, points);
        p.sort_by_key(|a| (a[0], -a[1]));
        
        for i in 0..n {
            let upper_y = p[i][1];
            let mut lower_limit = -1 << 31;
            for j in i + 1..n {
                let current_y = p[j][1];
                if current_y <= upper_y && current_y > lower_limit {
                    res += 1;
                    lower_limit = current_y;
                    if upper_y == current_y {
                        break;
                    }
                }
            }
        }
        res
    }
}