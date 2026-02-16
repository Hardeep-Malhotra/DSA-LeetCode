// ===============================================================
// 📌 Problem: Find the Difference
// 🧠 Concept: Extra character find karna between two strings
// 🔹 s and t diye gaye hain, t me ek extra character hai
// 🔹 Hume wo extra character return karna hai
// ===============================================================

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    char findTheDifference(string s, string t) {

        // ===============================================================
        // ✅ APPROACH 1: Hash Map (Frequency Counting Method)
        // Time Complexity  : O(n)
        // Space Complexity : O(n)
        // Idea: Pehle s ka frequency store karo,
        //       phir t traverse karke compare karo.
        // ===============================================================

        /*
        unordered_map<char, int> mp;

        for(char ch : s)
            mp[ch]++;

        for(char ch : t) {
            if(mp.find(ch) == mp.end())
                return ch;

            mp[ch]--;

            if(mp[ch] == 0)
                mp.erase(ch);
        }

        return '\0';
        */


        // ===============================================================
        // ✅ APPROACH 2: ASCII Sum Difference Method
        // Time Complexity  : O(n)
        // Space Complexity : O(1)
        // Idea: t ka ASCII sum karo, s ka minus karo.
        //       Common characters cancel ho jayenge.
        // ===============================================================

        /*
        int sum = 0;

        for(char ch : t)
            sum += ch;

        for(char ch : s)
            sum -= ch;

        return (char)sum;
        */


        // ===============================================================
        // ✅ APPROACH 3: XOR Cancellation Method (Best Approach 🔥)
        // Time Complexity  : O(n)
        // Space Complexity : O(1)
        // Idea:
        //   a ^ a = 0
        //   0 ^ b = b
        // Common characters cancel ho jayenge,
        // extra character bach jayega.
        // ===============================================================

        char ans = 0;

        for(char ch : s)
            ans ^= ch;

        for(char ch : t)
            ans ^= ch;

        return ans;
    }
};
