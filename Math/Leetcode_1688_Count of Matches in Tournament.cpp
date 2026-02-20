class Solution
{
public:
    int numberOfMatches(int n)
    {

        /*
        ----------------------------------------------------
        Problem: Count Total Number of Matches in Tournament
        ----------------------------------------------------

        Approach: Brute Force Simulation

        Idea:
        - If number of teams is even:
              Matches played = n / 2
              Teams advance   = n / 2

        - If number of teams is odd:
              Matches played = (n - 1) / 2
              One team gets a bye
              Teams advance = (n - 1) / 2 + 1

        - Continue until only 1 team remains.
        */

        int matches = 0; // To store total matches played

        while (n > 1)
        {

            if (n % 2 == 0)
            {
                // If number of teams is even
                matches += n / 2; // n/2 matches played
                n = n / 2;        // Half teams advance
            }
            else
            {
                // If number of teams is odd
                matches += (n - 1) / 2; // Matches played
                n = (n - 1) / 2 + 1;    // Teams advancing (including one bye team)
            }
        }

        return matches; // Return total matches
    }
};