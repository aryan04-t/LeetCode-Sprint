// LeetCode (3803. Count Residue Prefixes): 
// https://leetcode.com/problems/count-residue-prefixes 


// TAGS: [RATING: N/A], [EASY], [OPTIMAL], [STRING], [HASH SET], [MODULAR ARITHMETIC] 


#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int residuePrefixes(string s) {

        int n = s.length();
    
        unordered_set<char> uniqueChars;
        int ans = 0;
        
        for (int i=0; i < n; i++) {
            char ch = s[i];
            uniqueChars.insert(ch);

            if (uniqueChars.size() > 2) break;

            int totalUniqueChars = static_cast<int>(uniqueChars.size());
            int prefixLen = i + 1;

            if (totalUniqueChars == (prefixLen % 3)) ans++;
        }

        return ans;
    }
};


// T.C. = O(n) -> [Best Case: O(3) = O(1), Worst Case: O(n)] 
// S.C. = O(3) = O(1) 