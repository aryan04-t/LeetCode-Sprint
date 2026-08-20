// LeetCode (3805. Count Caesar Cipher Pairs): 
// https://leetcode.com/problems/count-caesar-cipher-pairs 


// TAGS: [RATING: N/A], [MEDIUM], [NAIVE], [TLE ERROR], [STRING], [PAIRING], [COUNTING], [CYCLIC NATURE], [SHIFT INVARIANT], [MODULAR ARITHMETIC], [EQUIVALENCE CLASSES] 


#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    string calculateShiftSignature(string s, int m) {

        string signature = "";

        for (int i=1; i < m; i++) {
            int forwardShift = s[i] - s[i-1];
            if (forwardShift < 0) forwardShift += 26;

            // int forwardShift = (s[i] - s[i-1] + 26) % 26;

            if (!signature.empty()) {
                signature += '-';
            }
            signature += to_string(forwardShift);
        }

        return signature;
    }

    long long countPairs(vector<string>& words) {
        
        int n = words.size();
        int m = words[0].size();

        long long validPairs = 0;

        for (int i=0; i < n-1; i++) {
            string &s1 = words[i];
            string s1ShiftSignature = calculateShiftSignature(s1, m);
            
            for (int j=i+1; j < n; j++) {
                string &s2 = words[j];
                string s2ShiftSignature = calculateShiftSignature(s2, m);

                if (s1ShiftSignature == s2ShiftSignature) {
                    validPairs++;
                }
            }
        }

        return validPairs;
    }
};


// T.C. = O(((n*(n-1))/2)*m) = O((n^2)*(m)) 
// S.C. = O(m) 