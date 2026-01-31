/*
=========================================================
Problem Name : Spiral Matrix
LeetCode     : 54
Difficulty   : Medium
---------------------------------------------------------
Problem:
Given an m x n matrix, return all elements in spiral order.
---------------------------------------------------------
Approach:
- Maintain four boundaries: srow, erow, scol, ecol
- Traverse in layers:
    1. Top row (left → right)
    2. Right column (top → bottom)
    3. Bottom row (right → left)
    4. Left column (bottom → top)
- Update boundaries after each traversal
- Continue until boundaries cross
---------------------------------------------------------
Time Complexity  : O(m * n)  // each element visited once
Space Complexity : O(1)      // extra space (excluding output vector)
=========================================================
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {

        // Edge case: empty matrix
        if(matrix.size() == 0) return {};

        vector<int> ans;

        int n = matrix.size();        // number of rows
        int m = matrix[0].size();     // number of columns

        // Define boundaries
        int srow = 0, erow = n - 1;
        int scol = 0, ecol = m - 1;

        // Loop until boundaries cross
        while (srow <= erow && scol <= ecol) {

            // 1. Top Row (left → right)
            for (int j = scol; j <= ecol; j++) {
                ans.push_back(matrix[srow][j]);
            }
            srow++;

            // 2. Right Column (top → bottom)
            for (int i = srow; i <= erow; i++) {
                ans.push_back(matrix[i][ecol]);
            }
            ecol--;

            // 3. Bottom Row (right → left)
            if (srow <= erow) {
                for (int j = ecol; j >= scol; j--) {
                    ans.push_back(matrix[erow][j]);
                }
                erow--;
            }

            // 4. Left Column (bottom → top)
            if (scol <= ecol) {
                for (int i = erow; i >= srow; i--) {
                    ans.push_back(matrix[i][scol]);
                }
                scol++;
            }
        }

        return ans;
    }
};
