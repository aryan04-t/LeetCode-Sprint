// LeetCode (3788. Maximum Score of a Split): 
// https://leetcode.com/problems/maximum-score-of-a-split 


// TAGS: [RATING: N/A], [MEDIUM], [OPTIMAL], [ARRAY], [PREFIX SUM], [SUFFIX MIN], [MAXIMIZING] 


#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    long long maximumScore(vector<int>& nums) {

        int n = nums.size();
        vector<long long> prefixSum(n, 0);
        vector<int> suffixMin(n, 0);

        long long sum = 0;
        for (int i=0; i < n; i++) {
            int num = nums[i];
            sum += num;
            prefixSum[i] = sum;
        }

        int mini = INT_MAX;
        for (int i=n-1; i >= 0; i--) {
            int num = nums[i];
            mini = min(mini, num);
            suffixMin[i] = mini;
        }

        long long maxScore = LLONG_MIN;
        for (int i=0; i < n-1; i++) {
            long long score = prefixSum[i] - suffixMin[i+1];
            maxScore = max(score, maxScore);
        }

        return maxScore;
    }
};


// T.C. = O(n) + O(n) + O(n) = O(3n) = O(n) 
// S.C. = O(n) + O(n) = O(2n) = O(n) 