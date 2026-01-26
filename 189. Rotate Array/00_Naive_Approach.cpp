// LeetCode (189. Rotate Array): 
// https://leetcode.com/problems/rotate-array 


// TAGS: [RATING: N/A], [MEDIUM], [NAIVE], [TLE ERROR], [ARRAY], [ROTATE ARRAY], [ROTATE ARRAY FROM RIGHT], [SIMULATION], [CYCLIC ARRAY], [MATH], [MODULAR ARITHMETIC] 


#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    void rotateArray(vector<int> &nums) {

        int n = nums.size();
        int rotateEle = nums[n-1];

        int i = n-2;
        while (i >= 0) {
            nums[i+1] = nums[i];
            i--;
        }

        nums[0] = rotateEle;
    }

    void rotate(vector<int>& nums, int k) {
        
        int n = nums.size();
        if (k == 0 || n == 0) return;

        k %= n;

        while (k--) {
            rotateArray(nums);
        }
    }
};


// T.C. = O(n^2) 
// S.C. = O(1) 