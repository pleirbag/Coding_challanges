/*Given an integer n, return true if it is a power of four. Otherwise, return false.

An integer n is a power of four, if there exists an integer x such that n == 4x.*/

//brainless exercise, might be faster with a unordered map or another lookup solution instead
//there are only 17 numbers smaller than an int that are power of four anyway
class Solution {
public:
    bool isPowerOfFour(int n) {
        if (n <= 0 || n > 1073741824) // 4^15, any more and we are blowing past signed int, and one above unsigned
            return false;
        if (n == 1 || n == 4)
            return true;
        for (int i {4}; i <= n || i <= 536870911; i *= 4){
            if (i == n)
                return (true);
        }
        return (false);
    }
};