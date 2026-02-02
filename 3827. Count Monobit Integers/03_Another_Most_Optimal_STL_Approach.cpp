// LeetCode (3827. Count Monobit Integers): 
// https://leetcode.com/problems/count-monobit-integers 


// TAGS: [RATING: N/A], [EASY], [MOST OPTIMAL], [STL], [DECIMAL NUMBER], [MATH], [INTUITION INVERSION] 


#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int countMonobit(int n) {
        int monoBits = bit_width(static_cast<unsigned int>(n + 1));
        return monoBits;
    }
};


// T.C. = O(1) 
// S.C. = O(1) 