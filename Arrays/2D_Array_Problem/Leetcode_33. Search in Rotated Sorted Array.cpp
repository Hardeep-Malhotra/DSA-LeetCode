
// ---------------------------------------------------------
// Brute Force Approach to Search an Element in a Sorted 2D Array
// ---------------------------------------------------------
//
// Time Complexity  : O(n^2)
// Space Complexity : O(1)
//
// Reason:
// - Hum poori matrix ko row by row traverse kar rahe hain
// - Har element ko key ke saath compare kar rahe hain
// - Matrix sorted hone ke bawajood koi optimization use nahi ki
// ---------------------------------------------------------

#include <iostream>
using namespace std;

/*
---------------------------------------------------------
Function Name : SearchSorted
Purpose       : 2D matrix me given key ko search karna
Approach      : Brute Force (Full traversal)
---------------------------------------------------------
*/
int SearchSorted(int matrix[4][4], int n, int key)
{
    // Row traversal
    for (int i = 0; i < n; i++)
    {
        // Column traversal
        for (int j = 0; j < n; j++)
        {
            // Agar key mil jaaye
            if (matrix[i][j] == key)
            {
                return key; // element found
            }
        }
    }

    // Agar element na mile
    return -1;
}

int main()
{
    /*
    Sorted 2D Matrix
    ----------------
    10  20  30  40
    15  25  35  45
    27  29  37  48
    32  33  39  50
    */
    int matrix[4][4] = {
        {10, 20, 30, 40},
        {15, 25, 35, 45},
        {27, 29, 37, 48},
        {32, 33, 39, 50}};

    int key = 33;

    // Function call
    int result = SearchSorted(matrix, 4, key);

    // Output
    if (result != -1)
        cout << "Element found: " << result << endl;
    else
        cout << "Element not found" << endl;

    return 0;
}

/*
=========================================================
Problem Name : Search a 2D Matrix II
LeetCode     : 240
Difficulty   : Medium
---------------------------------------------------------
Matrix Properties:
- Each row is sorted (left → right)
- Each column is sorted (top → bottom)
---------------------------------------------------------
Approach     : Staircase Search
---------------------------------------------------------
Idea:
- Start from TOP-RIGHT corner
- If current element > target → move LEFT
- If current element < target → move DOWN
- If equal → target found
---------------------------------------------------------
Time Complexity  : O(m + n)
Space Complexity : O(1)
=========================================================
*/

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

class Solution
{
public:
    bool searchMatrix(vector<vector<int>> &matrix, int target)
    {

        int m = matrix.size();    // number of rows
        int n = matrix[0].size(); // number of columns

        // Start from top-right corner
        int row = 0;
        int col = n - 1;

        // Traverse until boundaries are valid
        while (row < m && col >= 0)
        {

            if (matrix[row][col] == target)
            {
                return true; // element found
            }
            else if (matrix[row][col] > target)
            {
                col--; // move left
            }
            else
            {
                row++; // move down
            }
        }

        // Element not found
        return false;
    }
};
