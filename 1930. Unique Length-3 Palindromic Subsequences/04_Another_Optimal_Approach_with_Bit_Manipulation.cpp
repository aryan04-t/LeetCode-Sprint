// LeetCode (1930. Unique Length-3 Palindromic Subsequences): 
// https://leetcode.com/problems/unique-length-3-palindromic-subsequences 


// TAGS: [RATING: 1533], [MEDIUM], [OPTIMAL], [STRING], [SUBSEQUENCE], [PALINDROME], [HASH VECTOR], [LAST OCCURRENCE PRECOMPUTATION], [FIRST OCCURRENCE PRECOMPUTATION], [BIT MANIPULATION], [BIT MASKING], [CHARACTER BOUND OPTIMIZATION], [INTUITION INVERSION] 


#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int countSetBits(int mask) {
        int count = 0;
        while (mask) {
            bool isLsbSet = (mask & 1);
            if (isLsbSet) count++;
            mask >>= 1;
        }
        return count;
    }

    // range = (left, right) -> both exclusive  
    int findUniqueCharsInRange (
        const string &s,
        int left, 
        int right
    ) {
        int mask = 0;
        for (int j = left+1; j < right; j++) {
            char ch = s[j];
            int shifts = ch - 'a'; 
            int bitPosition = (1 << shifts); 
            mask |= bitPosition;
        }

        int uniqueCharsInRange = countSetBits(mask);

        return uniqueCharsInRange;
    }

    void findAllCharsFirstLastOcc (
        const string &s,
        int n,
        vector<int> &charFirstOcc,
        vector<int> &charLastOcc
    ) {
        for (int i=0; i < n; i++) {
            char ch = s[i];
            if (charFirstOcc[ch - 'a'] == -1) {
                charFirstOcc[ch - 'a'] = i;
            }
            charLastOcc[ch - 'a'] = i;
        }
    }

    int countPalindromicSubsequence(string s) {
        
        int n = s.length();
        
        vector<int> charFirstOcc(26, -1);
        vector<int> charLastOcc(26, -1);
        findAllCharsFirstLastOcc(s, n, charFirstOcc, charLastOcc);

        int ans = 0;

        for (int i=0; i < 26; i++) {
            
            int left = charFirstOcc[i];
            int right = charLastOcc[i];

            if (left == -1) continue;
            if (right - left < 2) continue;

            int uniqueCharsInRange = findUniqueCharsInRange(s, left, right);
            
            int validPalindromicSubseq = uniqueCharsInRange;
            ans += validPalindromicSubseq;
        }

        return ans;
    }
};


// T.C. = O(n) + O(26*n) = O(n) 
// S.C. = O(26) + O(26) = O(1) 