/*Given a positive integer n, generate an n x n matrix filled with elements from 1 to n2 in spiral order.*/


class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        int horizontal {0};
        int vertical {0};
        int spiral_limits {n};
        vector<vector<int>> matrix(n, vector<int>(n));
		int i {1};
        do {
            while (horizontal < spiral_limits - 1)
                matrix[vertical][horizontal++] = i++;
			matrix[vertical][horizontal] = i;

            while (vertical < spiral_limits - 1)
                matrix[vertical++][horizontal] = i++;
			matrix[vertical][horizontal] = i;

            while (horizontal > n - spiral_limits)
				matrix[vertical][horizontal--] = i++;
			spiral_limits--;

            while (vertical > n - spiral_limits){
                matrix[vertical--][horizontal] = i++;
			}
        } while (i <= n * n && spiral_limits > 0);
        return (matrix);
    }
};