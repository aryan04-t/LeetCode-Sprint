// LeetCode (3783. Mirror Distance of an Integer): 
// https://leetcode.com/problems/mirror-distance-of-an-integer 


// TAGS: [RATING: 1170], [EASY], [MOST OPTIMAL], [DECIMAL NUMBER], [REVERSING] 


#include<bits/stdc++.h> 
using namespace std; 


class Solution {
public:
    int reverseNumber (int n) {
        int revNum = 0;
        while (n) {
            int digit = n % 10;
            revNum = revNum * 10 + digit;
            n /= 10;
        }
        return revNum;
    }

    int mirrorDistance(int n) {
        int revNum = reverseNumber(n);
        return abs(n - revNum);
    }
};


// T.C. = O(log(n) to the base 10) = O(1) -> because n can have max 10 digits 
// S.C. = O(1) 