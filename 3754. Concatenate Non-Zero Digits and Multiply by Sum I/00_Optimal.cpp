// LeetCode (3754. Concatenate Non-Zero Digits and Multiply by Sum I): 
// https://leetcode.com/problems/concatenate-non-zero-digits-and-multiply-by-sum-i 


#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    long long sumAndMultiply(int n) {

        string xReverseStr = "";
        long long x = 0;
        long long sum = 0;
        
        while (n) {
            int digit = n % 10;
            sum += digit;
            if (digit) xReverseStr += char(digit + '0');
            n /= 10;
        }

        reverse(xReverseStr.begin(), xReverseStr.end());

        x = xReverseStr != "" ? stoi(xReverseStr) : 0;

        return (x * sum);
    }
};


// T.C. = O(m) + O(m/2) = O(m) 
// S.C. = O(m) 

// m = log(n) to the base 10 