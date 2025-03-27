use std::io::{self, BufRead};

/*
 * Complete the 'staircase' function below.
 *
 * The function accepts INTEGER n as parameter.
 */

fn staircase(n: i32) {
    let mut output = String::from_utf8(vec![b' '; n as usize]).unwrap();
    
    for i in 0..n {
        let y: usize =(n - i) as usize;
        let range = (y-1)..y;
        output.replace_range(range,"#");
        println!("{}", output);
    }
}

fn main() {
    let stdin = io::stdin();
    let mut stdin_iterator = stdin.lock().lines();

    let n = stdin_iterator.next().unwrap().unwrap().trim().parse::<i32>().unwrap();

    staircase(n);
}
