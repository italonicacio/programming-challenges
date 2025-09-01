#include <stack>
#include <string>
#include <iostream>

using namespace std;

class Solution {
public:
    char InverseBrackets(char c) {

        switch(c) {
            case '(':
                return ')';
            case '{':
                return '}';
            case '[':
                return ']';
            default:
                break;
        }

        switch(c) {
            case ')':
                return '(';
            case '}':
                return '{';
            case ']':
                return '[';
            default:
                break;
        }

        return c;
    }

    bool IsOpenBrackets(char c) {
        switch(c) {
            case '(':
                return true;
            case '{':
                return true;
            case '[':
                return true;
            default:
                return false;
        }
    }

    bool IsCloseBrackets(char c) {
        switch(c) {
            case ')':
                return true;
            case '}':
                return true;
            case ']':
                return true;
            default:
                return false;
        }
    }

    bool isValid(string s) {
        std::stack<char> stack;

        if(IsCloseBrackets(s[0])) {
            return false;
        }


        for(int i = 0; i < s.size(); ++i) {
            char c = s[i];
            std::cout << "char i " << c << " " << i << std::endl; 
            stack.push(c);
            
            if(IsOpenBrackets(c)) {
                continue;
            }

            if(IsCloseBrackets(c)) {
                char c_pop = stack.top();
                stack.pop();
                if(stack.empty()) return false;
                char c_top = stack.top();

                
                if (c_top != InverseBrackets(c_pop)) {
                    return false;
                }
                stack.pop();                
            }    
        }

        if(!stack.empty()) {
            return false;
        }

        return true;
    }
};


int main() {
    std::string p = "()[]{}";

    Solution sol;
    std::cout << p << std::endl;
    bool result = sol.isValid(p);
    std::cout << "result: " << result << std::endl;
}