// LeetCode (389. Find the Difference): 
// https://leetcode.com/problems/find-the-difference 


// TAGS: [RATING: N/A], [EASY], [NAIVE], [STRING] 


#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    char findTheDifference(string s, string t) {
        
        int n = s.length();

        vector<bool> seen(n + 1, false);
        for (char ch : s) {
            for (int i=0; i < n+1; i++) {
                if (ch == t[i] && !seen[i]) {
                    seen[i] = true;
                    break;
                }
            }
        }
        
        char ans = '-';
        for (int i=0; i < n+1; i++) {
            if (!seen[i]) {
                ans = t[i];
                break;
            }
        }
        
        return ans;
    }
};


// T.C. = O(n*(n+1)) + O(n+1) = O(n^2) 
// S.C. = O(n+1) = O(n) 

// Here, n = s.length() and n + 1 == t.length() 