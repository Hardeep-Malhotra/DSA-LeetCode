#include <vector>
using namespace std;

/*
    LeetCode 2022: Convert 1D Array Into 2D Array

    Idea:
    1. Check if original.size() == m * n
    2. Fill the 2D matrix row-wise:
         row = k / n
         col = k % n
*/

class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {

        // Step 1: Check if construction is possible
        if (original.size() != m * n) {
            return {};  // empty 2D array
        }

        // Step 2: Create result matrix
        vector<vector<int>> result(m, vector<int>(n));

        // Step 3: Fill row-wise
        for (int k = 0; k < original.size(); k++) {
            int row = k / n;
            int col = k % n;
            result[row][col] = original[k];
        }

        return result;
    }
};
