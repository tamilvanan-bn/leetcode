impl Solution {
    pub fn check(word: &str, pattern: &String) -> bool {
        !word.chars().any(|c| pattern.contains(c))
    }

    pub fn can_be_typed_words(text: String, broken_letters: String) -> i32 {
        text.split_whitespace()
            .filter(|word| Self::check(word, &broken_letters))
            .count() as i32
    }
}
