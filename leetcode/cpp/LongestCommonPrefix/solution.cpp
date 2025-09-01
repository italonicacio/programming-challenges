class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int quantity = strs.size();
        int smaller_size = strs[0].size();
        std::string result("");

        for(int i = 1; i < quantity; ++i) {
            if(strs[i].size() < smaller_size) {
                smaller_size = strs[i].size();
            }
        }

        
        for(int i = 0; i < smaller_size; ++i) {
            int count = 0;
            for(int j = 0; j < quantity; ++j) {
                if (strs[0][i] == strs[j][i]) {
                    count++;
                }
            }

            if (count != quantity) {
                break;
            }

            result.push_back(strs[0][i]);
        }

        return result;
    }
};