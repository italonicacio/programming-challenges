#include <unordered_map>

class Solution {
public:
    std::unordered_map<char, int> map{{'I', 1},   {'V', 5},   {'X', 10},
                                      {'L', 50},  {'C', 100}, {'D', 500},
                                      {'M', 1000}};

    int romanToInt(string s) {
        int sum = 0;
        size_t i = 0;
        for (i = 0; i < s.size() - 1; ++i) {
            int num_si = this->map[s[i]];
            int num_sione = this->map[s[i+1]];

            if (num_si < num_sione) {
                sum += num_sione - num_si;
                ++i;
                continue;
            }

            sum += num_si;
        }

        if (i < s.size()) {
            sum += this->map[s[i]];
        }

        return sum;
    }
};