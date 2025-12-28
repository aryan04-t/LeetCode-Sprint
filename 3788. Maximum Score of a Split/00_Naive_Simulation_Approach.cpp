// LeetCode (3788. Maximum Score of a Split): 
// https://leetcode.com/problems/maximum-score-of-a-split 


// TAGS: [RATING: N/A], [MEDIUM], [NAIVE], [TLE ERROR], [ARRAY], [SIMULATION], [SUM], [MAXIMIZING], [MATH] 


#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    long long maximumScore(vector<int>& nums) {

        int n = nums.size();
        long long maxScore = LLONG_MIN;

        for (int i=0; i < n-1; i++) {
            int j = 0;
            
            long long prefixSum = 0;
            while (j <= i) prefixSum += nums[j++];
            
            int mini = INT_MAX;
            while (j < n) mini = min(mini, nums[j++]);

            long long score = prefixSum - mini;
            maxScore = max(maxScore, score); 
        }

        return maxScore;
    }
};


// T.C. = O(n^2) 
// S.C. = O(1) 