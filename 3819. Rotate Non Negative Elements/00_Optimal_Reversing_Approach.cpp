// LeetCode (3819. Rotate Non Negative Elements):
// https://leetcode.com/problems/rotate-non-negative-elements 


// TAGS: [] 


#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    vector<int> rotateElements(vector<int>& nums, int k) {

        if (k == 0) return nums;
        
        vector<int> nonNegEles;
        for (int num : nums) {
            if (num >= 0) {
                nonNegEles.push_back(num);
            }
        }

        int m = nonNegEles.size();
        if (m == 0) return nums;
        
        k %= m;
        if (k == 0) return nums;

        reverse(nonNegEles.begin(), nonNegEles.begin() + k);
        reverse(nonNegEles.begin() + k, nonNegEles.end());
        reverse(nonNegEles.begin(), nonNegEles.end());

        int n = nums.size();
        int j = 0;
        
        for (int i=0; i < n; i++) {
            if (nums[i] >= 0) {
                nums[i] = nonNegEles[j];
                j++;
            }
        }

        return nums;
    }
};


// T.C. = O(n) + O(k/2) + O((m-k)/2) + O(m/2) + O(n) = O(n + m) 
// S.C. = O(m) 