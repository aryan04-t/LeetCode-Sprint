// LeetCode (3794. Reverse String Prefix): 
// https://leetcode.com/problems/reverse-string-prefix 


// TAGS: [RATING: N/A], [EASY], [MOST OPTIMAL], [STL], [STRING], [REVERSING] 


#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    string reversePrefix(string s, int k) {
        reverse(s.begin(), s.begin() + k);
        return s;
    }
};


// T.C. = O(k/2) = O(k) = O(n) 
// S.C. = O(1) 