// LeetCode (3842. Toggle Light Bulbs): 
// https://leetcode.com/problems/toggle-light-bulbs 


// TAGS: [RATING: N/A], [EASY], [OPTIMAL], [ARRAY], [SIMULATION],  [HASH MAP], [MODULAR ARITHMETIC], [SORTING] 


#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    vector<int> toggleLightBulbs(vector<int>& bulbs) {

        unordered_map<int, int> coutBulbClicks;

        for (int val : bulbs) {
            coutBulbClicks[val]++;
        }

        vector<int> ans;
        for (const pair<int, int> &p : coutBulbClicks) {
            bool isBulbOn = p.second % 2;
            if (isBulbOn) ans.push_back(p.first);
        }

        sort(ans.begin(), ans.end());

        return ans;
    }
};


// T.C. = O(n) + O(n) + O(n*log(n)) = O(n*log(n)) 
// S.C. = O(n) + log(n) = O(n) 

// Here, n = 100 at max, and n = the length of vector<int> bulbs 