class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int, int> map;
        // map.reserve(nums.size());

        for(int i = 0; i < nums.size(); ++i) {
            int complement = target - nums[i];
            
            auto it = map.find(complement);
            if (it != map.end() && it->second != i) {
                return std::vector<int>{i, it->second};
            }
            map[nums[i]] = i;

        }
        return std::vector<int>{-1, -1};
    }
};