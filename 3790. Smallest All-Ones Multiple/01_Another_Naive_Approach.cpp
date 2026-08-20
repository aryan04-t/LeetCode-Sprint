// LeetCode (3790. Smallest All-Ones Multiple): 
// https://leetcode.com/problems/smallest-all-ones-multiple 


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
            num = ((num * 10) + 1) % k;
            digits++;
        }

        return -1;
    }
};
