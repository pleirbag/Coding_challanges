/*Given a string s consisting of words and spaces, return the length of the last word in the string.

A word is a maximal
consisting of non-space characters only.*/

class Solution {
public:
    int lengthOfLastWord(string s) {
        
        int begginingEnd {0};
        int size         {0};

        for (int i {0}; i < s.length(); i++){
            if (s[i] == ' ' && s[i + 1] != ' ' && s[i + 1] != '\0')
                begginingEnd = i + 1;
        }
        for (int i {begginingEnd}; s[i] != '\0' && s[i] != ' '; size++){
            i++;
        }
        return (size);
    }
};