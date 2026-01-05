// LeetCode (961. N-Repeated Element in Size 2N Array): 
// https://leetcode.com/problems/n-repeated-element-in-size-2n-array 


// TAGS: [RATING: 1161], [EASY], [MOST OPTIMAL], [ARRAY], [INTUITION INVERSION] 


#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        
        int m = nums.size();
        int n = m / 2;

        for (int i=2; i < m; i++) {
            int num = nums[i];
            if (nums[i] == nums[i-1] || nums[i] == nums[i-2]) return num;
            else if (i >= 3 && nums[i] == nums[i-3]) return num;
        }

        return -1;
    }
};


// T.C. = O(m-2) = O((2*n)-2) = O(n) 
// S.C. = O(1) 

// Here, m = 2*n