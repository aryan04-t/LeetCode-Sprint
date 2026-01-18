// LeetCode (3813. Vowel-Consonant Score): 
// https://leetcode.com/problems/vowel-consonant-score 


// TAGS: [RATING: N/A], [EASY], [OPTIMAL], [STL], [STRING], [HASH SET], [COUNTING] 


#include<bits/stdc++.h>
using namespace std;


class Solution {
private:
    unordered_set<char> vowelsSet = { 'a', 'e', 'i', 'o', 'u' };

public:
    int vowelConsonantScore(string s) {
        
        int alphabetLettersCount = 0;
        int vowelsCount = 0;
        
        for (char ch : s) {
            if (isalpha(ch)) alphabetLettersCount++;
            if (vowelsSet.count(ch)) vowelsCount++;
        }

        int consonantsCount = alphabetLettersCount - vowelsCount; 

        return (consonantsCount > 0) ? (vowelsCount / consonantsCount) : 0;
    }
};


// T.C. = O(n) 
// S.C. = O(1) 