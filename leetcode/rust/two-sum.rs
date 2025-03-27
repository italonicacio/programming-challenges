impl Solution {
    pub fn two_sum(nums: Vec<i32>, target: i32) -> Vec<i32> {
        let num = nums[0];
        let size = nums.len();
        for i in 0..size {
            for j in (i+1)..size {
                let sum = nums[i] + nums[j];
                if sum == target {
                    return vec![i as i32, j as i32];
                }
            }
        }

        Vec::new()
    }
}

// Better solution

// let mut hash_table = HashMap::new();
// let size = nums.len();
// for i in 0..size {
//     hash_table.insert(nums[i], i as i32);
// }

// for i in 0..size {
//     let complement = target - nums[i];
//     if hash_table.contains_key(&complement) && hash_table[&complement] != i as i32 {
//         return return vec![i as i32, hash_table[&complement]];
//     }
// }