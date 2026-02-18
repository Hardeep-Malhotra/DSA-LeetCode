/********************************************************************
    Problem Name  : Find Words That Can Be Formed by Characters
    LeetCode No   : 1160
    Language      : C++

    Description:
    Given an array of strings 'words' and a string 'chars',
    return the sum of lengths of all words that can be formed
    using characters from 'chars'.

    Each character in 'chars' can only be used once per word.

    Approach:
    1. Store frequency of characters from 'chars' using unordered_map.
    2. For each word:
        - Create a temporary frequency map.
        - Check if word frequency exceeds available characters.
    3. If valid, add word length to result.

    Time Complexity  : O(n * m)
    Space Complexity : O(1)  (since alphabet size is limited)
********************************************************************/

#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
using namespace std;

class Solution
{
public:
    int countCharacters(vector<string> &words, string chars)
    {

        // Step 1: Store frequency of characters in 'chars'
        unordered_map<char, int> charMap;
        for (char ch : chars)
        {
            charMap[ch]++;
        }

        int result = 0;

        // Step 2: Check each word
        for (string word : words)
        {

            unordered_map<char, int> wordMap;
            bool canForm = true;

            for (char ch : word)
            {

                wordMap[ch]++;

                // If required frequency exceeds available frequency
                if (wordMap[ch] > charMap[ch])
                {
                    canForm = false;
                    break;
                }
            }

            // Step 3: If word can be formed, add its length
            if (canForm)
            {
                result += word.length();
            }
        }

        return result;
    }
};
