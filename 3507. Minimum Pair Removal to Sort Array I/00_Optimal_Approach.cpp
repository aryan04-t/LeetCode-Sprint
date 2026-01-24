// LeetCode (3507. Minimum Pair Removal to Sort Array I): 
// https://leetcode.com/problems/minimum-pair-removal-to-sort-array-i 


// TAGS: [RATING: 1348], [EASY], [OPTIMAL], [ARRAY], [SIMULATION], [SUM], [MINIMIZING], [CHECK IS ARRAY SORTED], [MAKE ARRAY NON-DECREASING SORTED] 


#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int findMinAdjacentPairStartIndex(const vector<int> &nums) {
        
        int minAdjPairStartIdx = -1;
        int minSum = INT_MAX;

        int n = nums.size();
        
        for (int i = n - 1; i >= 1; i--) {
            int sum = nums[i-1] + nums[i];
            if (sum <= minSum) {
                minSum = sum;
                minAdjPairStartIdx = i-1;
            }
        }

        return minAdjPairStartIdx;
    }

    bool isArrayNonDecreasing (const vector<int>& nums) {

        int n = nums.size();
        int i = 1;

        while (i < n) {
            if (nums[i-1] > nums[i]) return false;
            i++;
        }

        return true;
    }

    int minimumPairRemoval(vector<int>& nums) {
        
        int minMoves = 0;

        while (!isArrayNonDecreasing(nums)) {

            int minAdjPairStartIdx = findMinAdjacentPairStartIndex(nums); 
            
            vector<int> newNums;
            int n = nums.size();
            int i = 0; 

            while (i < n) {
                if (minAdjPairStartIdx == i) {
                    newNums.push_back(nums[i] + nums[i+1]);
                    i += 2;
                    continue;
                }
                newNums.push_back(nums[i]);
                i++;
            }

            nums = move(newNums);
            minMoves++;
        }
        
        return minMoves;
    }
};


// T.C. = O(n^2) 
// S.C. = O(n) 