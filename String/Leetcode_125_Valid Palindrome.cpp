/************************************************************
 * Problem: Valid Palindrome
 * Platform: LeetCode
 *
 * Description:
 * Check whether a string is a palindrome by:
 * - Ignoring non-alphanumeric characters
 * - Ignoring case sensitivity (A == a)
 *
 * Approach (Two Pointers):
 * - Use start and end pointers.
 * - Skip special characters using isalnum().
 * - Convert characters to lowercase using tolower().
 * - Compare characters.
 *
 * Time Complexity: O(n)
 * Space Complexity: O(1)
 ************************************************************/

#include <iostream>
#include <cctype>   // For isalnum(), tolower()
using namespace std;

class Solution
{
public:
    bool isPalindrome(string s)
    {
        int start = 0;
        int end = s.length() - 1;

        while (start < end)
        {
            // Skip non-alphanumeric characters from left
            while (start < end && !isalnum(s[start]))
            {
                start++;
            }

            // Skip non-alphanumeric characters from right
            while (start < end && !isalnum(s[end]))
            {
                end--;
            }

            // Convert both characters to lowercase for comparison
            char left  = tolower(s[start]);
            char right = tolower(s[end]);

            // If characters don't match, it's not a palindrome
            if (left != right)
            {
                return false;
            }

            // Move pointers inward
            start++;
            end--;
        }

        return true;
    }
};
