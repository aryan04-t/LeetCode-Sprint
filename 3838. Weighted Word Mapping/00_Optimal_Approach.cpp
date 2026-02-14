// LeetCode (3838. Weighted Word Mapping): 
// https://leetcode.com/problems/weighted-word-mapping 


// TAGS: [RATING: N/A], [EASY], [OPTIMAL], [ARRAY], [STRING], [SIMULATION], [MATH], [SUM], [MODULAR ARITHMETIC], [HASH MAP] 


#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {

        string ans = "";

        unordered_map<int, char> mp = {
            { 0, 'z' }, { 1, 'y' }, { 2, 'x' }, { 3, 'w' },
            { 4, 'v' }, { 5, 'u' }, { 6, 't' }, { 7, 's' },
            { 8, 'r' }, { 9, 'q' }, { 10, 'p' }, { 11, 'o' },
            { 12, 'n' }, { 13, 'm' }, { 14, 'l' }, { 15, 'k' },
            { 16, 'j' }, { 17, 'i' }, { 18, 'h' }, { 19, 'g' },
            { 20, 'f' }, { 21, 'e' }, { 22, 'd' }, { 23, 'c' },
            { 24, 'b' }, { 25, 'a' }
        };

        for (string word : words) {
            int weight = 0;
            for (char ch : word) {
                weight += weights[ch - 'a'];
            }
            weight %= 26;
            ans += mp[weight];
        }

        return ans;
    }
};


// T.C. = O(n*m) 
// S.C. = O(26) = O(1) -> Auxiliary Space Complexity 

// Here, n = total number of words, m = total number of average characters in all the words 