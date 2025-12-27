// LeetCode (3780. Maximum Sum of Three Numbers Divisible by Three): 
// https://leetcode.com/problems/maximum-sum-of-three-numbers-divisible-by-three 


// TAGS: [RATING: 1584], [MEDIUM], [OPTIMAL], [ARRAY], [MODULAR ARITHMETIC], [SUM], [MAXIMIZING], [HEAP], [MIN HEAP], [K LARGEST OR SMALLEST ELEMENTS] 


#include<bits/stdc++.h>
using namespace std;


using MinHeap = priority_queue<int, vector<int>, greater<int>>; 


class Solution {
public:
    void findTopKLargestElements (
        MinHeap &minHeap,
        int val,
        int k = 3
    ) {
        if (minHeap.size() != k) {
            minHeap.push(val);
        }
        else if (val > minHeap.top()) {
            minHeap.pop();
            minHeap.push(val);
        }
    } 

    void buildVectorFromHeap (
        MinHeap &minHeap,
        vector<int> &vec 
    ) {
        while (!minHeap.empty()) {
            int val = minHeap.top();
            minHeap.pop();
            vec.push_back(val);
        }
        reverse(vec.begin(), vec.end());
    }

    int maximumSum(vector<int>& nums) {
        
        MinHeap zeroRemMinHeap;
        MinHeap oneRemMinHeap;
        MinHeap twoRemMinHeap;

        int n = nums.size();
        for (int i=0; i < n; i++) {
            
            int val = nums[i];
            int rem = val % 3;

            if (rem == 0) findTopKLargestElements(zeroRemMinHeap, val);
            if (rem == 1) findTopKLargestElements(oneRemMinHeap, val);
            if (rem == 2) findTopKLargestElements(twoRemMinHeap, val);
        }

        vector<int> zeroRemMaxNums;
        buildVectorFromHeap(zeroRemMinHeap, zeroRemMaxNums);
        
        vector<int> oneRemMaxNums;
        buildVectorFromHeap(oneRemMinHeap, oneRemMaxNums);

        vector<int> twoRemMaxNums;
        buildVectorFromHeap(twoRemMinHeap, twoRemMaxNums);

        int maxiSum = INT_MIN;
        
        if (zeroRemMaxNums.size() >= 3) {
            int val1 = zeroRemMaxNums[0] + zeroRemMaxNums[1] + zeroRemMaxNums[2];
            maxiSum = max(maxiSum, val1);
        }
        if (oneRemMaxNums.size() >= 3) {
            int val2 = oneRemMaxNums[0] + oneRemMaxNums[1] + oneRemMaxNums[2];
            maxiSum = max(maxiSum, val2);
        }
        if (twoRemMaxNums.size() >= 3) {
            int val3 = twoRemMaxNums[0] + twoRemMaxNums[1] + twoRemMaxNums[2];
            maxiSum = max(maxiSum, val3);
        }
        if (
            zeroRemMaxNums.size() >= 1 && 
            oneRemMaxNums.size() >= 1 && 
            twoRemMaxNums.size() >= 1
        ) {
            int val4 = zeroRemMaxNums[0] + oneRemMaxNums[0] + twoRemMaxNums[0];
            maxiSum = max(maxiSum, val4);
        }
        
        return maxiSum == INT_MIN ? 0 : maxiSum;
    }
};


// T.C. = O(n*(3*log(3))) + O(3*(3*(log(3) + (3/2))) + O(1) = O(n) 
// S.C. = O(9) = O(1) 

// n = nums.size() 