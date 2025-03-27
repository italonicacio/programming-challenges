use std::io::{self, BufRead};

/*
 * Complete the 'plusMinus' function below.
 *
 * The function accepts INTEGER_ARRAY arr as parameter.
 */

fn plusMinus(arr: &[i32]) {
    let mut count_zero: i32 = 0;
    let mut count_positive: i32 = 0;
    let mut count_negative: i32 = 0;
    
    let size: f32 = arr.len() as f32;
    
    for num in arr.iter() {
        if *num == 0 {
            count_zero += 1;
        }
        
        if *num > 0 {
            count_positive += 1;
        }
        
        if *num < 0 {
            count_negative += 1;
        }  
    }
    
    println!("{:.6}", count_positive as f32/size);
    println!("{:.6}", count_negative as f32/size);
    println!("{:.6}", count_zero as f32/size);
}

fn main() {
    let stdin = io::stdin();
    let mut stdin_iterator = stdin.lock().lines();

    let n = stdin_iterator.next().unwrap().unwrap().trim().parse::<i32>().unwrap();

    let arr: Vec<i32> = stdin_iterator.next().unwrap().unwrap()
        .trim_end()
        .split(' ')
        .map(|s| s.to_string().parse::<i32>().unwrap())
        .collect();

    plusMinus(&arr);
}
