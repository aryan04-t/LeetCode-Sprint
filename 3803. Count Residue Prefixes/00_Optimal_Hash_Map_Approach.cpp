// LeetCode (3803. Count Residue Prefixes): 
// https://leetcode.com/problems/count-residue-prefixes 


// TAGS: [RATING: N/A], [EASY], [OPTIMAL], [STRING], [HASH MAP], [MODULAR ARITHMETIC] 


#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int residuePrefixes(string s) {

        int n = s.length();
    
        unordered_map<char, int> charFreq;
        int distinctChars = 0;
        int ans = 0;
        
        for (int i=0; i < n; i++) {
            char ch = s[i];
            
            charFreq[ch]++;
            if (charFreq[ch] == 1) distinctChars++;

            int prefixLen = i + 1;
            if (distinctChars == (prefixLen % 3)) ans++;
        }

        return ans;
    }
};


// T.C. = O(n) 
// S.C. = O(26) = O(1)  