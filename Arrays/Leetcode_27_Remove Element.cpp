/************************************************************
 * Problem: Remove Element (In-Place)
 * Platform: LeetCode
 *
 * Description:
 * Given an array nums and a value val, remove all occurrences
 * of val in-place and return the number of remaining elements.
 *
 * Approach:
 * - Use two pointers.
 * - 'i' traverses the array.
 * - 'k' stores the position for valid elements.
 * - If nums[i] != val, copy it to nums[k] and increment k.
 *
 * Time Complexity: O(n)
 * Space Complexity: O(1)
 ************************************************************/

#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int removeElement(vector<int> &nums, int val)
    {
        // Pointer to place the next valid element
        int k = 0;

        // Traverse the entire array
        for (int i = 0; i < nums.size(); i++)
        {
            // If current element is not equal to val
            if (nums[i] != val)
            {
                nums[k] = nums[i]; // Place it at valid position
                k++;               // Move valid index forward
            }
        }

        // k is the count of elements not equal to val
        return k;
    }
};
