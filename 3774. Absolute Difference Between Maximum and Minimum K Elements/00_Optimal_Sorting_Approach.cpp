// LeetCode (3774. Absolute Difference Between Maximum and Minimum K Elements) 
// https://leetcode.com/problems/absolute-difference-between-maximum-and-minimum-k-elements 


// TAGS: [RATING: 1206], [EASY], [OPTIMAL], [ARRAY], [SORTING], [SUM] 


#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int absDifference(vector<int>& nums, int k) {
        
        sort(nums.begin(), nums.end());
        
        int n = nums.size();
        int smallSum = 0, bigSum = 0;

        for (int i=0; i < n; i++) {
            int val = nums[i];
            if (i < k) smallSum += val;
            if (i >= n-k) bigSum += val;
        }

        return abs(bigSum - smallSum);
    }
};


// T.C. = O(n*log(n)) + O(n) = O(n*log(n)) 
// S.C. = O(log(n)) 