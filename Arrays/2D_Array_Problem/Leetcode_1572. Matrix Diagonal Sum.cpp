/*
---------------------------------------------------------
Function Name : DiagonalSum
Purpose       : Matrix ke primary + secondary diagonal
                elements ka sum nikalna
---------------------------------------------------------
*/

#include <iostream>
using namespace std;

/*
-------------------------------------------------
WAY 1 : BRUTE FORCE APPROACH
-------------------------------------------------
Time Complexity  : O(n^2)
Space Complexity : O(1)

Reason:
- Nested loops se poori matrix traverse hoti hai
- Har element pe check lagta hai
*/

int DiagonalSum_BruteForce(int matrix[4][4], int n)
{
    int sum = 0;

    for (int i = 0; i < n; i++) // rows
    {
        for (int j = 0; j < n; j++) // columns
        {
            // Primary Diagonal
            if (i == j)
                sum += matrix[i][j];

            // Secondary Diagonal
            else if (i + j == n - 1)
                sum += matrix[i][j];
        }
    }
    return sum;
}
/*
-------------------------------------------------
WAY 2 : OPTIMIZED APPROACH
-------------------------------------------------
Time Complexity  : O(n)
Space Complexity : O(1)

Reason:
- Har row me diagonal ke column indices direct milte hain
- No unnecessary traversal
*/

int DiagonalSum_Optimized(int matrix[4][4], int n)
{
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        // Primary diagonal element
        sum += matrix[i][i];

        // Secondary diagonal element
        // Odd matrix me center element double count hone se bachane ke liye
        if (i != n - i - 1)
        {
            sum += matrix[i][n - i - 1];
        }
    }
    return sum;
}

int main()
{
    int matrix[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}};

    cout << "Brute Force Diagonal Sum: "
         << DiagonalSum_BruteForce(matrix, 4) << endl;

    cout << "Optimized Diagonal Sum: "
         << DiagonalSum_Optimized(matrix, 4) << endl;

    return 0;
}
