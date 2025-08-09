/*Implement the myAtoi(string s) function, which converts a string to a 32-bit signed integer.

The algorithm for myAtoi(string s) is as follows:

    Whitespace: Ignore any leading whitespace (" ").
    Signedness: Determine the sign by checking if the next character is '-' or '+', assuming positivity if neither present.
    Conversion: Read the integer by skipping leading zeros until a non-digit character is encountered or the end of the string is reached. If no digits were read, then the result is 0.
    Rounding: If the integer is out of the 32-bit signed integer range [-231, 231 - 1], then round the integer to remain in the range. Specifically, integers less than -231 should be rounded to -231, and integers greater than 231 - 1 should be rounded to 231 - 1.

Return the integer as the final result.*/

class Solution {
public:
    int myAtoi(string s) {
        double number   {0};
        int index       {0};
        int sign        {1};
        
        while (s[index] == ' ')
            index++;
        if (s[index] == '+' || s[index] == '-'){
            if (s[index] == '-')
                sign *= -1;
            index++;
        }
        while ((s[index] >= '0' && s[index] <= '9') && s[index]){
            number *=   10;
            number +=    (int)s[index] - '0';
            index++;
        }
        number *= sign;
        if (number < -2147483648)
            return (-2147483648);
        if (number > 2147483647)
            return (2147483647);
        return (number);
    }
};