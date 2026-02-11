// LeetCode (3833. Count Dominant Indices): 
// https://leetcode.com/problems/count-dominant-indices 


// TAGS: [RATING: N/A]


#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int dominantIndices(vector<int>& nums) {

        int n = nums.size();

        double sum = nums[n-1];
        double numbers = 1;

        int dominants = 0;
        
        for (int i = n-2; i >= 0; i--) {
            double avg = sum / numbers;
            if (static_cast<double>(nums[i]) > avg) {
                dominants++;
            }
            sum += nums[i];
            numbers++;
        }

        return dominants;
    }
};


// T.C. = O(n) 
// S.C. = O(1) 