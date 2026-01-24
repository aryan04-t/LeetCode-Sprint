// LeetCode (3507. Minimum Pair Removal to Sort Array I): 
// https://leetcode.com/problems/minimum-pair-removal-to-sort-array-i 


// TAGS: [RATING: 1348], [EASY], [MOST OPTIMAL], [STL], [ARRAY], [SIMULATION], [SUM], [MINIMIZING], [CHECK IS ARRAY SORTED], [MAKE ARRAY NON-DECREASING SORTED] 


#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int findMinAdjacentPairStartIndex(const vector<int> &nums) {
        
        int minAdjPairStartIdx = -1;
        int minSum = INT_MAX;

        int n = nums.size();
        
        for (int i = 1; i < n; i++) {
            int sum = nums[i-1] + nums[i];
            if (sum < minSum) {
                minSum = sum;
                minAdjPairStartIdx = i-1;
            }
        }

        return minAdjPairStartIdx;
    }

    int minimumPairRemoval(vector<int>& nums) {
        
        int minMoves = 0;

        while (!is_sorted(nums.begin(), nums.end())) {

            int minAdjPairStartIdx = findMinAdjacentPairStartIndex(nums); 

            nums[minAdjPairStartIdx] += nums[minAdjPairStartIdx + 1];
            nums.erase(nums.begin() + minAdjPairStartIdx + 1);

            minMoves++;
        }
        
        return minMoves;
    }
};


// T.C. = O(n^2) 
// S.C. = O(1) 