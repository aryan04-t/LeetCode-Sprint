// LeetCode (3827. Count Monobit Integers): 
// https://leetcode.com/problems/count-monobit-integers 


// TAGS: [RATING: N/A], [EASY], [OPTIMAL], [DECIMAL NUMBER], [BINARY NUMBER], [BIT MANIPULATION] 


#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int countMonobit(int n) {

        int monoBitInts = 0;
        
        for (int i=0; i <= n; i++) {
            
            int val = i;
            bool isMonoBit = true;
            
            int firstBit = val & 1 ? 1 : 0;
            val >>= 1;
            
            while (val) {
                int currBit = val & 1 ? 1 : 0;
                if (currBit != firstBit) {
                    isMonoBit = false;
                    break;
                }
                val >>= 1;
            }
            
            if (isMonoBit) {
                monoBitInts++;
            }
        }

        return monoBitInts;
    }
};


// T.C. = O(n*(log(n) to the base 2)) 
// S.C. = O(1) 