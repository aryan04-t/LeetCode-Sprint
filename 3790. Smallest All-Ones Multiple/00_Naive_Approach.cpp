// LeetCode (3790. Smallest All-Ones Multiple): 
// https://leetcode.com/problems/smallest-all-ones-multiple 


// TAGS: [RATING: 1593], [MEDIUM], [NAIVE], [DATA TYPE OVERFLOW ERROR], [INFINITE LOOP ERROR], [MATH], [DIVISIBILITY], [MODULAR ARITHMETIC], [DECIMAL NUMBER] 


#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int minAllOneMultiple(int k) {

        if (k % 2 == 0 || k % 5 == 0) return -1; 

        int num = 1;
        int digits = 1;

        while (true) {
            if (num % k == 0) return digits;
            num = (num * 10) + 1;
            digits++;
        }

        return -1;
    }
};