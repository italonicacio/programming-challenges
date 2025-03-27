use std::io::{self, BufRead};

/*
 * Complete the 'miniMaxSum' function below.
 *
 * The function accepts INTEGER_ARRAY arr as parameter.
 */

fn miniMaxSum(arr: &[i32]) {
    let mut min_sum = i64::MAX;
    let mut max_sum = i64::MIN;
    
    for i in 0..arr.len() {
        let mut sum: i64 = 0;
        
        for (j, &element) in arr.iter().enumerate() {
            if j != i {
                sum += element as i64;
            }
        }
        
        if sum < min_sum { min_sum = sum }
        if sum > max_sum { max_sum = sum }
    }
    
    println!("{} {}", min_sum, max_sum)
    
}

fn main() {
    let stdin = io::stdin();
    let mut stdin_iterator = stdin.lock().lines();

    let arr: Vec<i32> = stdin_iterator.next().unwrap().unwrap()
        .trim_end()
        .split(' ')
        .map(|s| s.to_string().parse::<i32>().unwrap())
        .collect();

    miniMaxSum(&arr);
}
