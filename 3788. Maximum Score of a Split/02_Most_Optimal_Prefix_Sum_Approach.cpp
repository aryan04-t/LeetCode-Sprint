// LeetCode (3788. Maximum Score of a Split): 
// https://leetcode.com/problems/maximum-score-of-a-split 


// TAGS: [RATING: N/A], [MEDIUM], [MOST OPTIMAL], [ARRAY], [PREFIX SUM], [SUFFIX ARRAY], [MAXIMIZING], [MATH], [INTUITION INVERSION] 


#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    long long maximumScore(vector<int>& nums) {

        int n = nums.size();

        long long prefixSum = 0;
        for (int i=0; i < n-1; i++) {
            int num = nums[i];
            prefixSum += num;
        }

        int mini = nums[n-1];
        long long maxScore = LLONG_MIN;

        for (int i=n-2; i >= 0; i--) {
            long long score = prefixSum - mini;
            maxScore = max(score, maxScore);
            
            int num = nums[i];
            prefixSum -= num;
            mini = min(mini, num);
        }

        return maxScore;
    }
};


// T.C. = O(n) + O(n) = O(2n) = O(n) 
// S.C. = O(1) 