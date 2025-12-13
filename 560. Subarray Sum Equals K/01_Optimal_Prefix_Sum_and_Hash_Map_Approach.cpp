// LeetCode (560. Subarray Sum Equals K): 
// https://leetcode.com/problems/subarray-sum-equals-k/ 


// TAGS: [RATING: N/A], [MEDIUM], [OPTIMAL], [ARRAY], [SUBARRAY], [PREFIX SUM], [HASH MAP], [INTUITION INVERSION], [PREFIX SUM - CYCLIC HASH - SUBARRAY REDUCTION] 


#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        
        int n = nums.size();

        unordered_map<int, int> sumCount;
        sumCount[0]++;

        int runningSum = 0;
        int ans = 0; 

        for (int i = 0; i < n; i++) {
            int val = nums[i];
            runningSum += val;

            int target = runningSum - k;
            ans += sumCount[target];

            sumCount[runningSum]++;
        }

        return ans;
    }
};


// T.C. = O(n) 
// S.C. = O(n) 