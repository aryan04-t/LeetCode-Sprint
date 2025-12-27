// LeetCode (3783. Mirror Distance of an Integer): 
// https://leetcode.com/problems/mirror-distance-of-an-integer 


// TAGS: [RATING: 1170], [EASY], [OPTIMAL], [STL], [DECIMAL NUMBER], [DECIMAL STRING], [REVERSING] 


#include<bits/stdc++.h> 
using namespace std; 


class Solution {
public:
    int mirrorDistance(int n) {
        string s = to_string(n);
        reverse(s.begin(), s.end());
        int revNum = stoi(s);
        return abs(n - revNum);
    }
};


// T.C. = O(1) 
// S.C. = O(1) 