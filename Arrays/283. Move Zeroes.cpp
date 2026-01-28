#include <vector>
using namespace std;

// --------------------------------------------------
// 🚚 Move Zeroes
// --------------------------------------------------
// Move all 0's to the end of the array while
// maintaining the relative order of non-zero elements.
//
// The operation is done in-place.
//
// Example:
// Input : [0, 1, 0, 3, 12]
// Output: [1, 3, 12, 0, 0]
// --------------------------------------------------

class Solution
{
public:
    void moveZeroes(vector<int> &nums)
    {

        int n = nums.size(); // Size of the array
        int position = 0;    // Index to place next non-zero element

        // First pass: move all non-zero elements forward
        for (int i = 0; i < n; i++)
        {
            if (nums[i] != 0)
            {
                nums[position] = nums[i];
                position++;
            }
        }

        // Second pass: fill remaining positions with zero
        for (int i = position; i < n; i++)
        {
            nums[i] = 0;
        }
    }
};

// 🧠 How This Works(Short Explanation)

//         position track karta hai next non
//     - zero element kaha rakha jaaye

//     Pehle loop me :

//     saare non
//     -
//     zero elements front me copy ho jaate hain(order same rehta hai)

//         Dusre loop me :

//     bachi hui positions ko 0 se fill kar dete hain

// ⏱️ Complexity
//     Time Complexity : O(n)

//   Space Complexity : O(1)(in - place)
