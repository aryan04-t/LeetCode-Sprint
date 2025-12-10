// LeetCode (3760. Maximum Substrings With Distinct Start): 
// https://leetcode.com/problems/maximum-substrings-with-distinct-start 


// TAGS: [RATING: 1364], [MEDIUM], [OPTIMAL], [STL], [STRING], [HASH SET] 


#include<bits/stdc++.h>
using namespace std; 


class Solution {
public:
    int maxDistinct(string s) {
        unordered_set<char> st(s.begin(), s.end());
        return static_cast<int>(st.size());
    }
};


// T.C. = O(n) 
// S.C. = O(26) = O(1) 

// n = s.length() 