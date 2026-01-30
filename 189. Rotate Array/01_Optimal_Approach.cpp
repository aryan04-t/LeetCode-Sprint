// LeetCode (189. Rotate Array): 
// https://leetcode.com/problems/rotate-array 


// TAGS: [RATING: N/A], [MEDIUM], [OPTIMAL], [ARRAY], [ROTATE ARRAY], [ROTATE ARRAY FROM RIGHT], [MATH], [MODULAR ARITHMETIC] 


#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int getLastRotateEleIdx(vector<int> &nums, int k) {

        int n = nums.size();
        int rotate = k;
        int idx = n - rotate;
        
        return idx;
    }

    void rotateArray(vector<int> &nums, int k) {

        int n = nums.size();

        // make a copy of nums 
        vector<int> temp(n, 0);
        for (int i = 0; i < n; i++) {
            temp[i] = nums[i];
        }

        int idx = getLastRotateEleIdx(nums, k);

        // build rotated array 
        int i = 0;
        int j = idx;
        while (j < n) {
            nums[i] = temp[j];
            i++; 
            j++;
        }

        j = 0;
        while (j < idx) {
            nums[i] = temp[j];
            i++;
            j++;
        }
    }

    void rotate(vector<int>& nums, int k) {
        
        int n = nums.size();
        if (n == 0) return;
        
        k %= n;
        if (k == 0) return;

        rotateArray(nums, k);
    }
};


// T.C. = O(n + n) = O(2n) = O(n) 
// S.C. = O(n) 