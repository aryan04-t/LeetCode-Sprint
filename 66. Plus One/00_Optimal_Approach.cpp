// LeetCode (66. Plus One): 
// https://leetcode.com/problems/plus-one 


// TAGS: [RATING: N/A], [EASY], [OPTIMAL], [STL], [ARRAY], [DECIMAL NUMBER], [MATH], [SUM], [REVERSING] 


#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        
        int n = digits.size();
        reverse(digits.begin(), digits.end());

        int carry = 0;
        for (int i=0; i < n; i++) {
            int incrementedDigit = digits[i] + carry + ((i == 0) ? 1 : 0);
            int newDigit = incrementedDigit % 10;
            digits[i] = newDigit;
            carry = incrementedDigit / 10;
        }

        if (carry) digits.push_back(carry);
        reverse(digits.begin(), digits.end());

        return digits;
    }
};


// T.C. = O(n/2) + O(n) + O(n/2) = O(2n) = O(n) 
// S.C. = O(1) 