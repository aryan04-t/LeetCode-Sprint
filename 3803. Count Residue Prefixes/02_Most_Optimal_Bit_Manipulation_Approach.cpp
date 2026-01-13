// LeetCode (3803. Count Residue Prefixes): 
// https://leetcode.com/problems/count-residue-prefixes 


// TAGS: [RATING: N/A], [EASY], [MOST OPTIMAL], [STRING], [BIT MANIPULATION], [BIT MASKING], [TRACKING SEEN CHARACTERS OF ALPHABET], [MODULAR ARITHMETIC] 


#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int residuePrefixes(string s) {

        int n = s.length();

        int charSeenMask = 0;
        int distinctChars = 0;
        int ans = 0;
        
        for (int i=0; i < n; i++) {
            char ch = s[i];
            
            int shifts = ch - 'a';
            int charPos = 1 << shifts;
            
            bool isCharNotSeenBefore = !(charSeenMask & charPos); 
            if (isCharNotSeenBefore) {
                distinctChars++;
                charSeenMask |= charPos;
            }

            if (distinctChars > 2) break;
            
            int prefixLen = i + 1;
            if (distinctChars == (prefixLen % 3)) ans++;
        }

        return ans;
    }
};


// T.C. = O(n) 
// S.C. = O(1) 