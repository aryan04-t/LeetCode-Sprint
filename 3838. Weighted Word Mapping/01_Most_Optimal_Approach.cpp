// LeetCode (3838. Weighted Word Mapping): 
// https://leetcode.com/problems/weighted-word-mapping 


// TAGS: [RATING: N/A], [EASY], [MOST OPTIMAL], [ARRAY], [STRING], [SUM], [MODULAR ARITHMETIC], [FORMULA BASED MAPPING] 


#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {

        string ans = "";
        
        for (string word : words) {
            int weight = 0;
            for (char ch : word) {
                weight += weights[ch - 'a'];
            }
            weight %= 26;
            weight = 25 - weight; // reverse alphabetical order mapping 
            ans += static_cast<char>(weight + 'a');
        }

        return ans;
    }
};


// T.C. = O(n*m) 
// S.C. = O(1) -> Auxiliary Space Complexity 

// Here, n = total number of words, m = total number of average characters in all the words 