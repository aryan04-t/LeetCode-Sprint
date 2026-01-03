// LeetCode (3795. Minimum Subarray Length With Distinct Sum At Least K): 
// https://leetcode.com/problems/minimum-subarray-length-with-distinct-sum-at-least-k 


// TAGS: [RATING: N/A], [MEDIUM], [NAIVE OPTIMAL], [TLE ERROR], [ARRAY], [SUBARRAY], [SLIDING WINDOW], [HASH MAP], [SUM], [MINIMIZING] 


#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int minLength(vector<int>& nums, int k) {
        
        int n = nums.size();

        for (int subArrLen=1; subArrLen <= n; subArrLen++) {
            
            long long sum = 0;
            unordered_map<int, int> freqCount;
            
            int i = 0;
            while (i < subArrLen) {
                int val = nums[i];
                freqCount[val]++;
                if (freqCount[val] == 1) {
                    sum += val;
                }
                i++;
            }
            
            if (sum >= k) return subArrLen;

            while (i < n) {
                int addVal = nums[i];
                freqCount[addVal]++;
                if (freqCount[addVal] == 1) {
                    sum += addVal;
                }

                int removeVal = nums[i - subArrLen];
                freqCount[removeVal]--;
                if (freqCount[removeVal] == 0) {
                    sum -= removeVal;
                }

                if (sum >= k) return subArrLen;

                i++;
            }
        }

        return -1;
    }
};


// T.C. = O(n^2) -> (Best case time complexity = O(n)) 
// S.C. = O(n) 