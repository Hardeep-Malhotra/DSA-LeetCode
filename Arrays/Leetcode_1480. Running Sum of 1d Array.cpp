#include <iostream>
#include <vector>
using namespace std;

// --------------------------------------------------
// 🔢 Running Sum of 1D Array
// --------------------------------------------------
// For each index i, runningSum[i] stores
// the sum of elements from index 0 to i.
//
// Example:
// Input : [1, 2, 3, 4]
// Output: [1, 3, 6, 10]
// --------------------------------------------------

class Solution
{
public:
    vector<int> runningSum(vector<int> &nums)
    {
        int n = nums.size(); // Size of input array

        vector<int> runningSum(n); // Array to store running sum

        // Base case: first element remains the same
        runningSum[0] = nums[0];

        // Calculate running sum using prefix sum approach
        for (int i = 1; i < n; i++)
        {
            runningSum[i] = runningSum[i - 1] + nums[i];
        }

        return runningSum; // Return final running sum array
    }
};

// 🔹 Time & Space Complexity

// Time Complexity: O(n)

// Space Complexity: O(n)