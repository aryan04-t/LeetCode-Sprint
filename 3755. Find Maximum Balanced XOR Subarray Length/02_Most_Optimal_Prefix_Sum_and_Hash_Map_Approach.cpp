// LeetCode (3755. Find Maximum Balanced XOR Subarray Length): 
// https://leetcode.com/problems/find-maximum-balanced-xor-subarray-length 


// TAGS: [RATING: 1663], [MEDIUM], [MOST OPTIMAL], [ARRAY], [SUBARRAY], [PREFIX SUM], [HASH MAP], [BIT MANIPULATION], [MAXIMIZING LENGTH], [EVEN AND ODD], [DIFFERENCE TRACKING], [CUSTOM HASHING], [INTUITION INVERSION], [PREFIX SUM - CYCLIC HASH - SUBARRAY REDUCTION]


#include<bits/stdc++.h>
using namespace std;


class PairHash {
public:
    size_t operator() (const pair<int, int> p) const {

        hash<int> HashInt;
        size_t newHash = HashInt(p.first) ^ HashInt(p.second << 1);

        return newHash;
    }
};


class Solution {
public:
    int maxBalancedSubarray(vector<int>& nums) {
        
        int n = nums.size();

        unordered_map<pair<int, int>, int, PairHash> mp;
        mp[{ 0, 0 }] = -1;

        int maxi = INT_MIN;
        int xored = 0;
        int odd = 0, even = 0;

        for (int i=0; i < n; i++) {
            int val = nums[i];
            xored ^= val;

            bool isOdd = val & 1;
            if (isOdd) odd++;
            else even++;

            int diff = even - odd;

            if (mp.count({ xored, diff })) {
                int j = mp[{ xored, diff }];
                int len = i - j;
                maxi = max(maxi, len);
            }
            else {
                mp[{ xored, diff }] = i;
            }
        }

        if (maxi == INT_MIN) maxi = 0;

        return maxi;
    }
};


// T.C. = O(n) 
// S.C. = O(n) 