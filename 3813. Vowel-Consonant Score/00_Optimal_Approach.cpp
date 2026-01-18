// LeetCode (3813. Vowel-Consonant Score): 
// https://leetcode.com/problems/vowel-consonant-score 


// TAGS: [RATING: N/A], [EASY], [OPTIMAL], [STL], [STRING], [HASH SET], [COUNTING] 


#include<bits/stdc++.h>
using namespace std;


class Solution {
private:
    unordered_set<char> vowelsSet = { 'a', 'e', 'i', 'o', 'u' };
    unordered_set<char> digitsSet = { '1', '2', '3', '4', '5', '6', '7', '8', '9', '0' };

public:
    int vowelConsonantScore(string s) {
        
        int vowelsCount = 0; 
        int consonantsCount = 0;
        
        for (char ch : s) {
            if (vowelsSet.count(ch)) vowelsCount++;
            else if (digitsSet.count(ch)) continue;
            else if (ch == ' ') continue;
            else consonantsCount++;
        }

        if (consonantsCount > 0) {
            return floor(vowelsCount / consonantsCount);
        }

        return 0;
    }
};


// T.C. = O(n) 
// S.C. = O(1) 