#include <vector>
using namespace std;

/*
    LeetCode 48: Rotate Image (90° Clockwise)

    Idea:
    1. Transpose the matrix (rows ↔ columns)
       swap(matrix[i][j], matrix[j][i]) where j > i

    2. Reverse each row

    Result:
    Matrix gets rotated 90 degrees clockwise in-place.
*/

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();

        // Step 1: Transpose the matrix
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                swap(matrix[i][j], matrix[j][i]);
            }
        }

        // Step 2: Reverse each row
        for (int i = 0; i < n; i++) {
            int start = 0, end = n - 1;
            while (start < end) {
                swap(matrix[i][start], matrix[i][end]);
                start++;
                end--;
            }
        }
    }
};
