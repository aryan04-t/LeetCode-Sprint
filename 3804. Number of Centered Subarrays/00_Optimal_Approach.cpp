// LeetCode (3804. Number of Centered Subarrays): 
// https://leetcode.com/problems/number-of-centered-subarrays 


// TAGS: [RATING: N/A], [MEDIUM], [OPTIMAL], [ARRAY], [SUBARRAY], [HASH SET], [SUM] 


#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int centeredSubarrays(vector<int>& nums) {
        
        int n = nums.size();
        int centeredSubarrays = 0;

        for (int i=0; i < n; i++) {
            unordered_set<int> seen;
            int sum = 0;

            for (int j=i; j < n; j++) {
                int val = nums[j];
                
                seen.insert(val);
                sum += val;
                
                if (seen.count(sum)) {
                    centeredSubarrays++;
                }
            }
        }

        return centeredSubarrays;
    }
};


// T.C. = O((n*(n+1))/2) = O(n^2) 
// S.C. = O(n) 