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

        for (int i=0; i < m-1; i++) {
            int num = nums[i];
            if (nums[i] == nums[i+1]) return num;
            else if (i < m-2 && nums[i] == nums[i+2]) return num;
            else if (i < m-3 && nums[i] == nums[i+3]) return num;
        }

        return -1;
    }
};


// T.C. = O(m-1) = O((2*n)-1) = O(n) 
// S.C. = O(1) 

// Here, m = 2*n