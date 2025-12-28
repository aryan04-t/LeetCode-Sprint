// LeetCode (3788. Maximum Score of a Split): 
// https://leetcode.com/problems/maximum-score-of-a-split 


// TAGS: [RATING: N/A], [MEDIUM], [OPTIMAL], [ARRAY], [PREFIX SUM], [SUFFIX ARRAY], [MAXIMIZING], [MATH] 


#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    long long maximumScore(vector<int>& nums) {

        int n = nums.size();
        vector<int> suffixMin(n, 0);

        int mini = INT_MAX;
        for (int i=n-1; i >= 0; i--) {
            int num = nums[i];
            mini = min(mini, num);
            suffixMin[i] = mini;
        }

        long long prefixSum = 0;
        long long maxScore = LLONG_MIN;

        for (int i=0; i < n-1; i++) {
            int num = nums[i];
            prefixSum += num;
            long long score = prefixSum - suffixMin[i+1];
            maxScore = max(score, maxScore);
        }

        return maxScore;
    }
};


// T.C. = O(n) + O(n) = O(2n) = O(n) 
// S.C. = O(n) 