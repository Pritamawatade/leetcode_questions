#include<iostream>
#include<limits.h>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
    if (x < 0) {
        return false;
    }

    int reversed = 0;
    int original = x;

    while (x != 0) {
        int remainder = x % 10;
                if (reversed > INT_MAX / 10 || (reversed == INT_MAX / 10 && remainder > 7)) {
            return false;
        }
        reversed = reversed * 10 + remainder;
        x /= 10;
    }

    return original == reversed;
}
};

int main()
{

    Solution s;
    s.isPalindrome(121);

    return 0;
}





