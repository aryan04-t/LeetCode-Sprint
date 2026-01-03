// LeetCode (3794. Reverse String Prefix): 
// https://leetcode.com/problems/reverse-string-prefix 


// TAGS: [RATING: N/A], [EASY], [OPTIMAL], [STL], [STRING], [SUBSTRING], [REVERSING] 


#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    string reversePrefix(string s, int k) {

        int n = s.length();
        string substr1 = s.substr(0, k);
        string substr2 = s.substr(k, n-k);

        reverse(substr1.begin(), substr1.end());
        
        string ans = substr1 + substr2;

        return ans;
    }
};


// T.C. = O(k) + O(n-k) + O(k/2) + O(n) = O(n) 
// S.C. = O(k) + O(n-k) + O(n) = O(n) 