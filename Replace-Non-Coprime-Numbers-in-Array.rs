impl Solution {
    fn gcd(mut a: i32, mut b: i32) -> i32 {
        if a == 0 {
            return b;
        }
        if b == 0 {
            return a;
        }

        if b > a {
            std::mem::swap(&mut a, &mut b);
        }

        while b != 0 {
            let temp = a % b;
            a = b;
            b = temp;
        }
        a
    }

    pub fn lcm(a: i32, b: i32) -> i32 {
        if a == 0 || b == 0 {
            return 0;
        }
        (a / Self::gcd(a, b)) * b
    }

    pub fn replace_non_coprimes(nums: Vec<i32>) -> Vec<i32> {
        let mut stack = Vec::new();

        for num in nums {
            let mut current = num;
            while let Some(&top) = stack.last() {
                let g = Self::gcd(top, current);
                if g > 1 {
                    current = Self::lcm(top, current);
                    stack.pop();
                } else {
                    break;
                }
            }
            stack.push(current);
        }

        stack
    }
}