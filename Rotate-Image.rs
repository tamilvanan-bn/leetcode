impl Solution {
    pub fn rotate(mat: &mut Vec<Vec<i32>>) {
        let n = mat.len();
        // Transpose
        for i in 0..n {
            for j in i + 1..n {
                let temp = mat[i][j];
                mat[i][j] = mat[j][i];
                mat[j][i] = temp;
            }
        }

        // Swap from the middle
        for i in 0..n {
            let (mut s, mut e) = (0, n - 1);
            while s < e {
                let temp = mat[i][s];
                mat[i][s] = mat[i][e];
                mat[i][e] = temp;
                s += 1;
                e -= 1;
            }
        }
    }
}