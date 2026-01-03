// LeetCode (3795. Minimum Subarray Length With Distinct Sum At Least K): 
// https://leetcode.com/problems/minimum-subarray-length-with-distinct-sum-at-least-k 


// TAGS: [RATING: N/A], [MEDIUM], [NAIVE], [TLE ERROR], [ARRAY], [SUBARRAY], [HASH SET], [SUM], [MINIMIZING] 


#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int minLength(vector<int>& nums, int k) {
        
        int n = nums.size();
        int mini = INT_MAX;

        for (int i=0; i < n; i++) {
            
            long long sum = 0;
            unordered_set<int> seen;

            for (int j=i; j < n; j++) {
                int val = nums[j];
                if (!seen.count(val)) {
                    sum += val;
                    seen.insert(val);
                }
                if (sum >= k) {
                    int subArrLen = j - i + 1;
                    mini = min(mini, subArrLen);
                }
            }
        }

        if (mini == INT_MAX) mini = -1;

        return mini;
    }
};


// T.C. = O((n*(n+1))/2) = O(n^2) 
// S.C. = O(n) 