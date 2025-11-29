// LeetCode (3754. Concatenate Non-Zero Digits and Multiply by Sum I): 
// https://leetcode.com/problems/concatenate-non-zero-digits-and-multiply-by-sum-i 


// TAGS: [RATING: 1247], [MEDIUM], [MOST OPTIMAL], [MATH], [DECIMAL NUMBER] 


#include<bits/stdc++.h>
using namespace std;


using ll = long long;


class Solution {
public:
    long long sumAndMultiply(int n) {
        
        ll x = 0;
        ll sum = 0;
        ll tens = 1;

        while (n) {
            ll digit = n % 10;
            if (digit) {
                x = digit * tens + x;
                tens *= 10;
            }
            n /= 10;

            sum += digit;
        }

        return (x * sum);
    }
};


// T.C. = O(log(n) to the base 10) 
// S.C. = O(1) 