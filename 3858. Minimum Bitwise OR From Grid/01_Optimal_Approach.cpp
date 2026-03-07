// LeetCode (3858. Minimum Bitwise OR From Grid): 
// https://leetcode.com/problems/minimum-bitwise-or-from-grid 


// TAGS: [RATING: 1947], [MEDIUM], [OPTIMAL], [2D ARRAY], [GREEDY], [MINIMIZING], [BIT MANIPULATION], [BITWISE OR PROPERTIES], [BITWISE AND PROPERTIES], [BIT MASKING], [INTUITION INVERSION], [BIT BY BIT GREEDY ANSWER CONSTRUCTION] 


#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int minimumOR(vector<vector<int>>& grid) {
        
        int ans = 0;
        int frozenZeroes = 0; // each bit is used as boolean for marking -> "is this bit frozen to be zero in ans?" -> 1 = true, 0 = false 

        for (int shift = 30; shift >= 0; shift--) {
            
            int ithBit = (1 << shift); // ithBit = (shift + 1) bit position in "ans" variable 
            int newfrozenZeroes = frozenZeroes | ithBit;

            bool isFreezingIthBitPossible = true;

            for (const vector<int> &row : grid) {
            
                bool foundValidInt = false;
                for (int val : row) {
                    if ((val & newfrozenZeroes) == 0) {
                        foundValidInt = true;
                        break;
                    }
                }

                if (!foundValidInt) {
                    isFreezingIthBitPossible = false;
                    break;
                }
            }

            if (!isFreezingIthBitPossible) {
                ans |= ithBit;
            }
            else {
                frozenZeroes = newfrozenZeroes;
            }
        }

        return ans;
    }
};


// T.C. = O(31 * m * n) = O(m*n) 
// S.C. = O(1) 

// Here, m = grid.size(), n = grid[0].size() 


/*

# Naive → Optimal Intuition

  1. All combinations = exponential time complexity, constraints demand linear/log-linear.

  2. OR is irreversible: 
    --> Bits only turn ON, never OFF. Minimize by keeping bits 0.
  
  3. Intuition Inversion: 
    --> Return value is just the minimum OR — not which numbers were picked. Exact picks are irrelevant.
    --> Don't ask "which numbers to pick?" — no greedy pick order exists; OR operator has no undo as well, locally good picks can poison future rows. 
    --> So, invert your intuition and ask "which bits can we force to be 0?"
    --> For linear time complexity, build the answer bit-by-bit, not combination-by-combination.

  4. Greedy from MSB → LSB:
    --> In final answer a bit stays 0 only if every row has at least one number with that bit = 0.
    --> Prioritize zeroing high bits (MSBs) first — they cost more.
  
  5. Carry forward the commitment: 
    --> Bits already forced to 0 must stay 0.
    --> Future picks must not accidentally re-set them.
    --> So each new bit check must also respect all previously zeroed bits.
*/