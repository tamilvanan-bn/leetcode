impl Solution {

    pub fn sort_diagonal(mut r0: usize, mut c0: usize, mat: &mut Vec<Vec<i32>>) {
        let (mut r1, mut c1, mut i, row, col) = (r0, c0, 0, mat.len(), mat[0].len());
        let mut diagonal = Vec::new();
        while r1 < row && c1 < col {
            diagonal.push(mat[r1][c1]);
            r1 += 1;
            c1 += 1;
        }
        diagonal.sort();
        while r0 < row && c0 < col {
            mat[r0][c0] = diagonal[i];
            r0 += 1;
            c0 += 1;
            i += 1; 
        }
    }

    pub fn diagonal_sort(m: Vec<Vec<i32>>) -> Vec<Vec<i32>> {
        let (row, col, mut mat) = (m.len(), m[0].len(), m);
        for i in 1..col {
            Self::sort_diagonal(0, i, &mut mat);
        }
        for i in 0..row {
            Self::sort_diagonal(i, 0, &mut mat);
        }
        mat
    }
}