
/*************************************************
 * Problem Name : Two Sum II - Input Array Is Sorted
 * File Name    : 01_Two_Sum_II.cpp
 * Language     : C++
 *
 * Problem Description:
 * Given a sorted array of integers, find two numbers
 * such that they add up to a specific target number.
 *
 * Return the indices of the two numbers (1-based index).
 *
 * DSA Concepts Used:
 * - Array
 * - Two Pointer Technique
 *
 * Time Complexity  : O(n)
 * Space Complexity : O(1)
 *************************************************/

#include <vector>
using namespace std;

class Solution
{
public:
    vector<int> twoSum(vector<int> &numbers, int target)
    {

        // Initialize two pointers
        int start = 0;
        int end = numbers.size() - 1;

        // Loop until pointers cross
        while (start < end)
        {

            // Calculate current sum
            int currSum = numbers[start] + numbers[end];

            // If target sum is found
            if (currSum == target)
            {
                // Return 1-based indices as required
                return {start + 1, end + 1};
            }
            // If current sum is greater than target
            else if (currSum > target)
            {
                end--; // Move right pointer left
            }
            // If current sum is smaller than target
            else
            {
                start++; // Move left pointer right
            }
        }

        // If no solution found (though problem guarantees one)
        return {};
    }
};
