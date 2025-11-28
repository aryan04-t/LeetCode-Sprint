// LeetCode (3381. Maximum Subarray Sum With Length Divisible by K): 
// https://leetcode.com/problems/maximum-subarray-sum-with-length-divisible-by-k 


// This gives TLE 


#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    long long maxSubarraySum(vector<int>& nums, int k) {
        
        int n = nums.size();
        long long maxiSum = LLONG_MIN;
        
        for (int i=0; i < n; i++) {
            long long currSum = 0;

            for (int j=i; j < n; j++) {
                
                currSum += static_cast<long long>(nums[j]);
                int len = j - i + 1;
                
                if (len % k == 0) {
                    maxiSum = max(maxiSum, currSum);
                }
            }
        }

        return maxiSum;
    }
};


// T.C. = O((n*(n+1))/2) = O(n^2) 
// S.C. = O(1) 