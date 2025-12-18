// LeetCode (1930. Unique Length-3 Palindromic Subsequences): 
// https://leetcode.com/problems/unique-length-3-palindromic-subsequences 


// TAGS: [RATING: 1533], [MEDIUM], [OPTIMAL], [STRING], [SUBSEQUENCE], [PALINDROME], [HASH VECTOR], [HASH SET], [CHARACTER BOUND OPTIMIZATION], [INTUITION INVERSION] 


#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    void countUniquePalindromes(
        char middleChar,
        const vector<bool> &seen,
        const vector<int> &charFreq,
        unordered_set<string> &uniquePalindromes
    ) {

        for (int ch=0; ch < 26; ch++) {
            if (seen[ch] && charFreq[ch] > 0) {
                
                char edgeChar = ch + 'a';
                string palindromeSubseq = { edgeChar, middleChar, edgeChar };

                if (!uniquePalindromes.count(palindromeSubseq)) {
                    uniquePalindromes.insert(palindromeSubseq);
                }
            }
        }
    }

    int countPalindromicSubsequence(string s) {
        
        int n = s.length();

        vector<bool> seen(26, false);
        seen[s[0] - 'a'] = true;

        vector<int> charFreq(26, 0);
        for (int i=1; i < n; i++) {
            char ch = s[i];
            charFreq[ch - 'a']++;
        }

        unordered_set<string> uniquePalindromes;

        for (int i=1; i < n; i++) {
            char middleChar = s[i];
            charFreq[middleChar - 'a']--;

            countUniquePalindromes(middleChar, seen, charFreq, uniquePalindromes);

            seen[middleChar - 'a'] = true;
        }

        int ans = uniquePalindromes.size();

        return ans;
    }
};


// T.C. = O(n) + O(n*26) = O(n) 
// S.C. = O(26) + O(26) + O(26*26) = O(1) 