// LeetCode (189. Rotate Array): 
// https://leetcode.com/problems/rotate-array 


// TAGS: [RATING: N/A], [MEDIUM], [MOST OPTIMAL], [STL], [ARRAY], [ROTATE ARRAY], [ROTATE ARRAY FROM RIGHT], [SIMULATION], [CYCLIC ARRAY], [MATH], [MODULAR ARITHMETIC], [REVERSING] 


#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    void rotateArray(vector<int>& nums, int k) {

        reverse(nums.rbegin(), nums.rbegin() + k);
        reverse(nums.rbegin() + k, nums.rend());
        reverse(nums.begin(), nums.end());
    }

    void rotate(vector<int>& nums, int k) {
        
        int n = nums.size();
        if (n == 0) return;

        k %= n;
        if (k == 0) return;

        rotateArray(nums, k);
    }
};


// T.C. = O(k/2) + O(n-k/2) + O(n/2) = O(n) 
// S.C. = O(1) 