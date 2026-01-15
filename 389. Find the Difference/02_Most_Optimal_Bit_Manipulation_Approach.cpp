// LeetCode (389. Find the Difference): 
// https://leetcode.com/problems/find-the-difference 


// TAGS: [RATING: N/A], [EASY], [MOST OPTIMAL], [STRING], [BIT MANIPULATION], [XOR PROPERTIES] 


#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    char findTheDifference(string s, string t) {
        
        int xored = 0;
        for (char ch : s) xored ^= static_cast<int>(ch);
        for (char ch : t) xored ^= static_cast<int>(ch);
        
        return static_cast<char>(xored);
    }
};


// T.C. = O(n) + O(n+1) = O(2n + 1) = O(n) 
// S.C. = O(1) 

// Here, n = s.length() and n + 1 == t.length() 