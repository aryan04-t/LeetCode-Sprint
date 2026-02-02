// LeetCode (3827. Count Monobit Integers): 
// https://leetcode.com/problems/count-monobit-integers 


// TAGS: [RATING: N/A], [EASY], [MOST OPTIMAL], [STL], [DECIMAL NUMBER], [MATH], [INTUITION INVERSION] 


#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int countMonobit(int n) {
        int monoBits = static_cast<int>(log2(n+1));
        return monoBits + 1; // + 1 is for counting 0  
    }
};


// T.C. = O(1) 
// S.C. = O(1) 