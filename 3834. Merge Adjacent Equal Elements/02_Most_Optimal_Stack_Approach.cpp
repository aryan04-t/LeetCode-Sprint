// LeetCode (3834. Merge Adjacent Equal Elements): 
// https://leetcode.com/problems/merge-adjacent-equal-elements 


// TAGS: [RATING: 1428], [MEDIUM], [MOST OPTIMAL], [STL], [ARRAY], [STACK], [INTUITION INVERSION] 


#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    vector<long long> mergeAdjacent(vector<int>& nums) {
        
        int n = nums.size();
        vector<long long> ans;
        
        for (int i = 0; i < n; i++) {
            
            long long curr = nums[i];
 
            while (!ans.empty() && ans.back() == curr) {
                ans.pop_back();
                curr *= 2;
            }

            ans.push_back(curr);
        }

        return ans;
    }
};


// T.C. = O(2n) = O(n) 
// S.C. = O(1) -> Auxiliary Space Complexity 