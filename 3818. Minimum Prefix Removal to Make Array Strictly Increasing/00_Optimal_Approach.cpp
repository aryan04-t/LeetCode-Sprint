// LeetCode (3818. Minimum Prefix Removal to Make Array Strictly Increasing): 
// https://leetcode.com/problems/minimum-prefix-removal-to-make-array-strictly-increasing 


// TAGS: [RATING: N/A], [MEDIUM], [OPTIMAL], [ARRAY], [MINIMIZING] 


#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int minimumPrefixLength(vector<int>& nums) {

        int n = nums.size();
        int i = n-1;

        while (i >= 1) {
            if (nums[i-1] >= nums[i]) break;
            i--;
        }

        return i;
    }
};


// T.C. = O(n) 
// S.C. = O(1) 