// LeetCode (961. N-Repeated Element in Size 2N Array): 
// https://leetcode.com/problems/n-repeated-element-in-size-2n-array 


// TAGS: [RATING: 1161], [EASY], [OPTIMAL], [ARRAY], [HASH SET], [COUNTING] 


#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        
        int m = nums.size();
        int n = m / 2;

        unordered_set<int> st;
        for (int i=0; i <= n+1; i++) {
            int num = nums[i];
            if (st.count(num)) return num;
            st.insert(num);
        }

        return -1;
    }
};


// T.C. = O(n+2) = O(n) 
// S.C. = O(n+1) = O(n) 