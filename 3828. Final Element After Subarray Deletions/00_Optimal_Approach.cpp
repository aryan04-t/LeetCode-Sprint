// LeetCode (3828. Final Element After Subarray Deletions): 
// https://leetcode.com/problems/final-element-after-subarray-deletions 


// TAGS: [RATING: N/A], [MEDIUM], [OPTIMAL], [ARRAY], [MAXIMIZING], [MINIMIZING], [GAME THEORY] 


#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int finalElement(vector<int>& nums) {
        int n = nums.size();
        return max(nums[0], nums[n-1]);
    }
};


// T.C. = O(1) 
// S.C. = O(1) 