/*
Given an m x n matrix, return all elements of the matrix in spiral order.
*/

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int nbr_v {static_cast<int>(matrix.size())};
        int nbr_h {static_cast<int>(matrix[0].size())};
        vector<int> order(nbr_h * nbr_v);
        int limits_top {0};
        int limits_lef {0};
        int limits_btt {nbr_v - 1};
        int limits_rgt {nbr_h - 1};
        int idx {0};


        while (limits_top <= limits_btt && limits_lef <= limits_rgt) {
            for (int col {limits_lef}; col <= limits_rgt; col++)
                order.at(idx++) = matrix[limits_top][col];
            limits_top++;

            if (limits_top > limits_btt) 
                break;

            for (int row {limits_top}; row <= limits_btt; row++)
                order.at(idx++) = matrix[row][limits_rgt];
            limits_rgt--;

            if (limits_lef > limits_rgt) 
                break;

            for (int rcol {limits_rgt}; rcol >= limits_lef; rcol--)
                order.at(idx++) = matrix[limits_btt][rcol];
            limits_btt--;

            if (limits_top > limits_btt) 
                break;

            for (int brow {limits_btt}; brow >= limits_top; brow--)
                order.at(idx++) = matrix[brow][limits_lef];
            limits_lef++;
        }
        return (order);
    }
};