/*A phrase is a palindrome if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters, it reads the same forward and backward. Alphanumeric characters include letters and numbers.

Given a string s, return true if it is a palindrome, or false otherwise.*/

class Solution {
public:

    bool is_alphanum(char c){
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9'))
            return true;
        return false;
    }
    bool isPalindrome(string s) {
        int size {static_cast<int>(s.size())};
        if (s.size() < 2)
            return true;
        for (int i {0}; i < size; i++){
            if (s[i] >= 'A' && s[i] <= 'Z')
                s[i] += 32;
        }
        size--;
        for (int i {0}; i < size; i++, size--){
            while (!is_alphanum(s[i]) && s[i])
                i++;
            while (!is_alphanum(s[size]) && s[i])
                size--;
            if (s[i] != s[size] && is_alphanum(s[i]))
                return false;
        }
        return true;
    }
};