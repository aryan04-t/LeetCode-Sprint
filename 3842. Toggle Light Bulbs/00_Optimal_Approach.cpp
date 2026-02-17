// LeetCode (3842. Toggle Light Bulbs): 
// https://leetcode.com/problems/toggle-light-bulbs 


// TAGS: [RATING: N/A], [EASY], [OPTIMAL], [ARRAY], [SIMULATION] 


#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    vector<int> toggleLightBulbs(vector<int>& bulbs) {

        vector<bool> bulbsOn(101, false);

        for (int val : bulbs) {
            bulbsOn[val] = !bulbsOn[val];
        }

        vector<int> ans;
        for (int i=1; i <= 100; i++) {
            bool isBulbOn = bulbsOn[i];
            if (isBulbOn) ans.push_back(i);
        }

        return ans;
    }
};


// T.C. = O(n) 
// S.C. = O(n) 

// Here, n = 100 at max