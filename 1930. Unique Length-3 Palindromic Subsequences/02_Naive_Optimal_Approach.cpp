// LeetCode (1930. Unique Length-3 Palindromic Subsequences): 
// https://leetcode.com/problems/unique-length-3-palindromic-subsequences 


// TAGS: [RATING: 1533], [MEDIUM], [NAIVE OPTIMAL], [STRING], [SUBSEQUENCE], [PALINDROME], [HASH SET], [INTUITION INVERSION] 


#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int countPalindromicSubsequence(string s) {
        
        int n = s.length();
        unordered_set<char> palindromeStart;

        int ans = 0;

        for (int i=0; i < n-2; i++) {
            if (!palindromeStart.count(s[i])) {

                palindromeStart.insert(s[i]);

                int j = n-1;
                while (j > i+1 && s[j] != s[i]) {
                    j--;
                }
                
                if (j <= i+1) continue;

                unordered_set<char> uniqueChars;
                int start = i+1;
                int end = j-1;
                
                while (start <= end) {
                    uniqueChars.insert(s[start]);
                    start++;
                }

                int validPalindromicSubseq = uniqueChars.size();
                ans += validPalindromicSubseq;
            }
        }

        return ans;
    }
};


// T.C. = O(n^2) 
// S.C. = O(26) + O(26) = O(1) 