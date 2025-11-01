/*Write a function to find the longest common prefix string amongst an array of strings.

If there is no common prefix, return an empty string "".*/


class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string prefix {};
        int i {0};
        int b {0};
        int str_len {static_cast<int>(strs.front().size())};

        while (i < str_len)
        {
            b = 1;
            while (b < strs.size()){
                if (strs[b][i] != strs[b - 1][i]){
                    return (prefix);
                }
                b++;
            }
            prefix += strs[b - 1][i];
            i++;
        } 
        return (prefix);
    }
};