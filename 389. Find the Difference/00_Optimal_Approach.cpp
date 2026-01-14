// LeetCode (389. Find the Difference): 
// https://leetcode.com/problems/find-the-difference 


// TAGS: [RATING: N/A], [EASY], [OPTIMAL], [STRING], [HASH MAP] 


#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    char findTheDifference(string s, string t) {
        
        unordered_map<char, int> charFreqCount;
        for (char ch : s) charFreqCount[ch]++;
        
        char ans = '-';
        
        for (char ch : t) {
            charFreqCount[ch]--;
            if (charFreqCount[ch] == -1) {
                ans = ch;
                break;
            }
        }
        
        return ans;
    }
};


// T.C. = O(n) + O(n) = O(2n) = O(n) 
// S.C. = O(n) 

// Here, n = s.length() and n + 1 == t.length() 