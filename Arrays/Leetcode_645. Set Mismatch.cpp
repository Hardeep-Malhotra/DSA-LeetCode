#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

class Solution
{
public:
    vector<int> findErrorNums(vector<int> &nums)
    {

        // These will store our final answers
        int duplicate = -1;
        int missing = -1;

        // ============================================================
        // 🔁 First Pass: Use index as a hash and mark visited seats
        // ============================================================
        for (int i = 0; i < nums.size(); i++)
        {

            // Step 1: Find the reserved seat (index) for current number
            // abs() is used because values may already be negative
            int idx = abs(nums[i]) - 1;

            // Step 2: Check if this seat was already visited
            if (nums[idx] < 0)
            {
                // If already negative, this number is duplicate
                duplicate = abs(nums[i]);
            }
            else
            {
                // Step 3: Mark this seat as visited by forcing it negative
                // We use -abs() to ensure it always stays negative
                nums[idx] = -abs(nums[idx]);
            }
        }

        // ============================================================
        // 🔁 Second Pass: Find the seat that was never visited
        // ============================================================
        for (int i = 0; i < nums.size(); i++)
        {

            // If a seat is still positive, no number ever visited here
            if (nums[i] > 0)
            {
                // Missing number is seat index + 1
                missing = i + 1;
            }
        }

        // Return the duplicate and missing numbers
        return {duplicate, missing};
    }
};

int main() {
    vector<int> nums = {1, 2, 2, 4};

    Solution obj;
    vector<int> ans = obj.findErrorNums(nums);

    cout << "Duplicate: " << ans[0] << endl;
    cout << "Missing: " << ans[1] << endl;

    return 0;
}