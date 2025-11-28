/*Given a string containing just the characters '(' and ')', return the length of the longest valid (well-formed) parentheses

.

 

Example 1:

Input: s = "(()"
Output: 2
Explanation: The longest valid parentheses substring is "()".

Example 2:

Input: s = ")()())"
Output: 4
Explanation: The longest valid parentheses substring is "()()".

Example 3:

Input: s = ""
Output: 0
*/

class Solution {
public:
    int longestValidParentheses(string s) {
        int biggest {0};
        int index   {0};
        int sm_idx  {0};
        int open    {0};
        int count   {0};
        int size    {static_cast<int>(s.size())};
        int no_clse {0};

        while (s[index] != '(' && index < size)
            index++;
        while (index < size){
            sm_idx = 0;
            open = 0;
            count = 0;
            while (index + sm_idx < size){
                if (s[index + sm_idx] == '(')
                    open++;
                if (open != 0)
                    count++;
                if (s[index + sm_idx] == ')'){
                    no_clse = 1;
                    open--;
                }
                if (open < 0)
                    break;
                if (open == 0 && count > biggest)
                    biggest = count;
                sm_idx++;
            }
            if (no_clse == 0)
                return (0);
            if (open != 0)
                count = 0;
            if (count > biggest)
                biggest = count;
            index++;
        }
     return (biggest);   
    }
};