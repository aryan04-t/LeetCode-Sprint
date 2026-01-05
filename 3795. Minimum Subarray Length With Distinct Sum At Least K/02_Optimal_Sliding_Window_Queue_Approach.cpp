// LeetCode (3795. Minimum Subarray Length With Distinct Sum At Least K): 
// https://leetcode.com/problems/minimum-subarray-length-with-distinct-sum-at-least-k 


// TAGS: [RATING: N/A], [MEDIUM], [OPTIMAL], [ARRAY], [SUBARRAY], [SLIDING WINDOW], [HASH MAP], [QUEUE], [SUM], [DISTINCT SUM], [MINIMIZING] 


#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int minLength(vector<int>& nums, int k) {

        int n = nums.size();

        unordered_map<int, int> freqCount;
        queue<int> subarray;

        long long sum = 0;
        int mini = INT_MAX;

        for (int i=0; i < n; i++) {
            int val = nums[i];
            subarray.push(val);

            freqCount[val]++;
            if (freqCount[val] == 1) {
                sum += val;
            }
            
            if (sum >= k) {
                int subArrLen = subarray.size();
                mini = min(mini, subArrLen);
            }

            while (!subarray.empty() && sum >= k) {
                int removeEle = subarray.front();
                subarray.pop();
                
                freqCount[removeEle]--;
                if (freqCount[removeEle] == 0) {
                    sum -= removeEle;
                }

                if (sum >= k) {
                    int subArrLen = subarray.size();
                    mini = min(mini, subArrLen);
                }
            }
        }

        if (mini == INT_MAX) mini = -1;

        return mini;
    }
};


// T.C. = O(2n) = O(n) 
// S.C. = O(n) + O(n) = O(2n) = O(n) 