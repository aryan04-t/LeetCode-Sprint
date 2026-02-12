// LeetCode (3833. Count Dominant Indices): 
// https://leetcode.com/problems/count-dominant-indices 


// TAGS: [RATING: N/A], [EASY], [OPTIMAL], [ARRAY], [SUFFIX SUM], [AVERAGE], [COUNTING] 


#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int dominantIndices(vector<int>& nums) {

        int n = nums.size();

        int sum = nums[n-1];
        int dominants = 0;
        
        for (int i = n-2; i >= 0; i--) {
            int numbers = n-i-1;
            int avg = sum / numbers;
            if (nums[i] > avg) {
                dominants++;
            }
            sum += nums[i];
        }

        return dominants;
    }
};


// T.C. = O(n) 
// S.C. = O(1) 