// LeetCode (3795. Minimum Subarray Length With Distinct Sum At Least K): 
// https://leetcode.com/problems/minimum-subarray-length-with-distinct-sum-at-least-k 


// TAGS: [RATING: N/A], [MEDIUM], [MOST OPTIMAL], [ARRAY], [SUBARRAY], [SLIDING WINDOW], [HASH MAP], [TWO POINTER], [SUM], [DISTINCT SUM], [MINIMIZING] 


#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int minLength(vector<int>& nums, int k) {

        int n = nums.size();

        unordered_map<int, int> freqCount;

        long long sum = 0;
        int mini = INT_MAX;
        int left = 0;

        for (int right = 0; right < n; right++) {
            int val = nums[right];

            freqCount[val]++;
            if (freqCount[val] == 1) {
                sum += val;
            }
            
            if (sum >= k) {
                int subArrLen = right - left + 1;
                mini = min(mini, subArrLen);
            }

            while (left <= right && sum >= k) {
                int removeEle = nums[left];
                left++;
                
                freqCount[removeEle]--;
                if (freqCount[removeEle] == 0) {
                    sum -= removeEle;
                }

                if (sum >= k) {
                    int subArrLen = right - left + 1;
                    mini = min(mini, subArrLen);
                }
            }
        }

        if (mini == INT_MAX) mini = -1;

        return mini;
    }
};


// T.C. = O(2n) = O(n) 
// S.C. = O(n) 