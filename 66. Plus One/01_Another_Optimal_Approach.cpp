// LeetCode (66. Plus One): 
// https://leetcode.com/problems/plus-one 


// TAGS: [RATING: N/A], [EASY], [OPTIMAL], [STL], [ARRAY], [DECIMAL NUMBER], [MATH], [SUM] 


#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        
        int n = digits.size();

        int carry = 0;
        for (int i=n-1; i >= 0; i--) {
            
            int incrementedDigit = digits[i] + carry + ((i == n-1) ? 1 : 0);
            int newDigit = incrementedDigit % 10;
            
            digits[i] = newDigit;
            carry = incrementedDigit / 10;

            if (carry == 0) return digits;
        }

        if (carry) digits.insert(digits.begin(), carry);

        return digits;
    }
};


// T.C. = O(n) + O(n) = O(2n) = O(n) -> [Best Case: O(1), Worst Case: O(n)]
// S.C. = O(1) 