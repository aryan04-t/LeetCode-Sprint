// LeetCode (3813. Vowel-Consonant Score): 
// https://leetcode.com/problems/vowel-consonant-score 


// TAGS: [RATING: N/A], [EASY], [MOST OPTIMAL], [STL], [STRING], [BIT MANIPULATION], [BIT MASKING], [COUNTING] 


#include<bits/stdc++.h>
using namespace std;


class Solution {
private:
    int buildVowelsMask () {
        
        int vowelsMask = 0;
        
        vowelsMask |= (
            (1 << ('a' - 'a')) | 
            (1 << ('e' - 'a')) | 
            (1 << ('i' - 'a')) | 
            (1 << ('o' - 'a')) | 
            (1 << ('u' - 'a'))
        );

        return vowelsMask;
    }

public:
    int vowelConsonantScore(string s) {
        
        int vowelsMask = buildVowelsMask();

        int consonantsCount = 0;
        int vowelsCount = 0;
        
        for (char ch : s) {
            if (isalpha(ch)) {
                int shifts = ch - 'a';
                int charBit = 1 << shifts;
                bool isVowel = static_cast<bool>(vowelsMask & charBit);

                if (isVowel) vowelsCount++;
                else consonantsCount++;
            }
        }

        return (consonantsCount > 0) ? (vowelsCount / consonantsCount) : 0;
    }
};


// T.C. = O(n) 
// S.C. = O(1) 