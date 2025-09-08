impl Solution {
    pub fn find_closest(x: i32, y: i32, z: i32) -> i32 {
        let x_dis = (x - z).abs();
        let y_dis = (y - z).abs();
        return if y_dis < x_dis {
            2
        } else if y_dis == x_dis {
            0
        } else {
            1
        }
    }
}