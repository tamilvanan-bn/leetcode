impl Solution {
    pub fn does_alice_win(s: String) -> bool {
        s.chars().any(|l| matches!(l, 'a' | 'e' | 'i' | 'o' | 'u'))
    }
}