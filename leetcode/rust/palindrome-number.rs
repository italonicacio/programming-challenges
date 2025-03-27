impl Solution {
    pub fn is_palindrome(x: i32) -> bool {
        let num_str = x.to_string();

        if num_str.starts_with('-') {
            return false;
        }

        let size = num_str.len();

        let mut y = size - 1;

        for i in 0..size {
            let char_i = num_str.chars().nth(i).unwrap();
            let char_y = num_str.chars().nth(y).unwrap();
            if char_i != char_y {
                return false;
            }
            y -= 1;
        }

        true
    }
}