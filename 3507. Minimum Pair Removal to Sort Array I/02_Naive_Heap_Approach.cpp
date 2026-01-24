// LeetCode (3507. Minimum Pair Removal to Sort Array I): 
// https://leetcode.com/problems/minimum-pair-removal-to-sort-array-i 


// TAGS: [RATING: 1348], [EASY], [NAIVE], [ARRAY], [SIMULATION], [SUM], [MINIMIZING], [HEAP], [MIN HEAP], [CHECK IS ARRAY SORTED], [MAKE ARRAY NON-DECREASING SORTED] 


#include<bits/stdc++.h>
using namespace std;


using IntPair = pair<int, int>;
using MinHeap = priority_queue<IntPair, vector<IntPair>, greater<IntPair>>; 


class Solution {
public:
    int findMinAdjacentPairStartIndex(const vector<int> &nums) {

        int n = nums.size();
        
        MinHeap minHeap;

        for (int i = 0; i < n-1; i++) {
            int sum = nums[i] + nums[i+1];
            minHeap.push({ sum, i });
        }

        return minHeap.top().second;
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


// T.C. = O(n*((n*log(n)) + n)) = O((n^2)*log(n)) 
// S.C. = O(n) 