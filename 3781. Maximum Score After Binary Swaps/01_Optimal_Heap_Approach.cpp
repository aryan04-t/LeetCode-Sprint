// LeetCode (3781. Maximum Score After Binary Swaps): 
// https://leetcode.com/problems/maximum-score-after-binary-swaps 


// TAGS: [RATING: 1823], [MEDIUM], [OPTIMAL], [ARRAY], [STRING], [GREEDY], [MAXIMIZING], [SUM], [HEAP], [MAX HEAP] 


#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    long long maximumScore(vector<int>& nums, string s) {
        
        int n = s.length();
        
        priority_queue<int> maxHeap;
        long long maxiSum = 0;

        for (int i=0; i < n; i++) {
            maxHeap.push(nums[i]);
            if (s[i] == '1') {
                maxiSum += maxHeap.top();
                maxHeap.pop();
            }
        }

        return maxiSum;
    }
};


// T.C. = O(n*log(n)) 
// S.C. = O(n) 