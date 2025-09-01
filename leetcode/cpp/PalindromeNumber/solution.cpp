int reverse_number(int n) {
    int reversed_num = 0;

    while (n > 0) {
        int last_digit = n % 10;
        if (reversed_num > (INT_MAX - last_digit) / 10) {
            // Overflow detectado
            return 0;
        }
        reversed_num = reversed_num * 10 + last_digit;
        n = n / 10;
    }

    return reversed_num;
}

class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) {
            return false;
        }      

        int reversed_num = reverse_number(x);

        if( (x-reversed_num) == 0 ) {
            return true;
        }

        return false;
    }
};

