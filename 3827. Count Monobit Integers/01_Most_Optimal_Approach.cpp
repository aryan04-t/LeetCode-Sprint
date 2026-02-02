// LeetCode (3827. Count Monobit Integers): 
// https://leetcode.com/problems/count-monobit-integers 


// TAGS: [RATING: N/A], [EASY], [MOST OPTIMAL], [DECIMAL NUMBER], [BINARY NUMBER], [BIT MANIPULATION], [INTUITION INVERSION] 


#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int countMonobit(int n) {

        int monoBitInts = 0;
        int val = 0;
        
        while (val <= n) {
            monoBitInts++;
            val <<= 1;
            val |= 1;
        }

        return monoBitInts;
    }
};


// T.C. = O(log(n) to the base 2) 
// S.C. = O(1) 