// LeetCode (3842. Toggle Light Bulbs): 
// https://leetcode.com/problems/toggle-light-bulbs 


// TAGS: [RATING: N/A], [EASY], [OPTIMAL], [ARRAY], [SIMULATION], [MODULAR ARITHMETIC] 


#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    vector<int> toggleLightBulbs(vector<int>& bulbs) {

        vector<int> coutBulbClicks(101, 0);

        for (int val : bulbs) {
            coutBulbClicks[val]++;
        }

        vector<int> ans;
        for (int i=1; i <= 100; i++) {
            bool isBulbOn = coutBulbClicks[i] % 2;
            if (isBulbOn) ans.push_back(i);
        }

        return ans;
    }
};


// T.C. = O(n) 
// S.C. = O(n) 

// Here, n = 100 at max, and n = the length of vector<int> bulbs 