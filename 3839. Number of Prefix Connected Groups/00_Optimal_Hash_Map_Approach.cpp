// LeetCode (3839. Number of Prefix Connected Groups): 
// https://leetcode.com/problems/number-of-prefix-connected-groups 


// TAGS: [RATING: N/A], [MEDIUM], [OPTIMAL], [STL], [ARRAY], [STRING], [HASH MAP], [GROUPING], [PREFIX], [COUNTING] 


#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int prefixConnected(vector<string>& words, int k) {

        unordered_map<string, int> mp;
        int ans = 0;

        for (string word : words) {
            if (word.length() < k) continue;
            
            string prefix = word.substr(0, k);
            mp[prefix]++;
            
            if (mp[prefix] == 2) ans++;
        }

        return ans;
    }
};


// T.C. = O(n*k) 
// S.C = O(n) -> caused by hash map 

// Here, n = the length of vector<string> named words 