/*326. Power of Three
Solved
Easy
Topics
premium lock iconCompanies

Given an integer n, return true if it is a power of three. Otherwise, return false.

An integer n is a power of three, if there exists an integer x such that n == 3x.*/

class Solution {
public:
    bool isPowerOfThree(int n) {
        int i {3};
        if (n == 1)
            return (true);
        if (n < 3 || n > 1162261467)
            return (false);
        while (i <= n){
            if (i == n)
                return (true);
            i *= 3;
        }
        return (false);
    }
};