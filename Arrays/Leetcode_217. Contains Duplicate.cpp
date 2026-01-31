#include <vector>
#include <algorithm>
using namespace std;

// --------------------------------------------------
// 🔁 Contains Duplicate
// --------------------------------------------------
// Check if the array contains any duplicate element.
// If any value appears at least twice, return true.
// Otherwise, return false.
//
// Approach:
// 1. Sort the array
// 2. Compare adjacent elements
//
// Example:
// Input : [1, 2, 3, 1]
// Output: true
// --------------------------------------------------

class Solution
{
public:
    bool containsDuplicate(vector<int> &nums)
    {

        int n = nums.size(); // Size of the array

        // Sort the array
        sort(nums.begin(), nums.end());

        // Check adjacent elements for duplicates
        for (int i = 1; i < n; i++)
        {
            if (nums[i] == nums[i - 1])
            {
                return true; // Duplicate found
            }
        }

        return false; // No duplicates found
    }
};

// 🧠 Explanation (Simple Words)

// Sorting ke baad duplicate elements side-by-side aa jaate hain

// Bas adjacent elements compare karne hote hain

// Jaise hi same mile → true

// ⏱️ Complexity
// Time Complexity: O(n log n) (due to sorting)

// Space Complexity: O(1) (extra space nahi, sorting in-place)
