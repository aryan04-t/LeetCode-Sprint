// LeetCode (389. Find the Difference): 
// https://leetcode.com/problems/find-the-difference 


// TAGS: [RATING: N/A], [EASY], [NAIVE OPTIMAL], [STRING], [SORTING] 


#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    char findTheDifference(string s, string t) {
        
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        
        int n = s.length();
        char ans = '-';
        
        for (int i = 0; i < n; i++) {
            if (s[i] != t[i]) {
                ans = t[i];
                break;
            }
        }

        if (ans == '-') ans = t[n];
        
        return ans;
    }
};


// T.C. = O(n*log(n)) + O(n*log(n)) + O(n) = O(n*log(n)) 
// S.C. = O(log(n)) + O(log(n)) = O(log(n)) 

// Here, n = s.length() and n + 1 == t.length() 