/********************************************************************
    Problem Name  : Largest 3 Same Consecutive Digits
    Platform      : LeetCode
    Language      : C++
    
    Description:
    Given a string consisting of digits, return the largest substring 
    of length 3 that contains the same digit repeated three times.
    If no such substring exists, return an empty string.

    Approach:
    - Use Fixed Size Sliding Window (size = 3)
    - Traverse the string
    - Check if nums[i], nums[i+1], nums[i+2] are equal
    - Keep track of the maximum valid 3-digit substring
    - Time Complexity: O(n)
    - Space Complexity: O(1)
********************************************************************/

#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    string largestGoodInteger(string nums) {
        string ans = "";

        // Traverse using fixed window of size 3
        for (int i = 0; i <= nums.size() - 3; i++) {
            
            // Check if three consecutive digits are same
            if (nums[i] == nums[i + 1] && nums[i] == nums[i + 2]) {
                
                // Create substring of 3 same digits
                string temp(3, nums[i]);
                
                // Keep the largest one
                ans = max(ans, temp);
            }
        }

        return ans;   // Return result (empty if not found)
    }
};
