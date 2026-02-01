/************************************************************
 * Problem: Valid Anagram
 * Platform: LeetCode
 *
 * Description:
 * Check whether two strings s and t are anagrams.
 * Anagrams contain the same characters with the same frequency.
 *
 * Assumption:
 * - Strings contain only lowercase English letters (a–z).
 *
 * Approach (Frequency Array):
 * - If lengths differ → not an anagram.
 * - Use an array of size 26 to count character frequency.
 * - Increment for s, decrement for t.
 * - If all counts become 0 → anagram.
 *
 * Time Complexity: O(n)
 * Space Complexity: O(1)
 ************************************************************/

#include <iostream>
using namespace std;

class Solution
{
public:
    bool isAnagram(string s, string t)
    {
        // Step 1: Length check
        if (s.length() != t.length())
        {
            return false;
        }

        // Step 2: Frequency array for 26 lowercase letters
        int count[26] = {0};

        // Step 3: Increase count based on string s
        for (int i = 0; i < s.length(); i++)
        {
            count[s[i] - 'a']++;
        }

        // Step 4: Decrease count based on string t
        for (int i = 0; i < t.length(); i++)
        {
            count[t[i] - 'a']--;
        }

        // Step 5: Check if all values are zero
        for (int i = 0; i < 26; i++)
        {
            if (count[i] != 0)
            {
                return false;
            }
        }

        return true;
    }
};
