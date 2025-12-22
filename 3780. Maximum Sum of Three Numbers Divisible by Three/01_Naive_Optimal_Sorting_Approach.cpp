// LeetCode (3780. Maximum Sum of Three Numbers Divisible by Three): 
// https://leetcode.com/problems/maximum-sum-of-three-numbers-divisible-by-three 


// TAGS: [RATING: N/A], [MEDIUM], [NAIVE OPTIMAL], [ARRAY], [SORTING], [MODULAR ARITHMETIC], [SUM], [MAXIMIZING] 


#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int maximumSum(vector<int>& nums) {

        vector<int> zeroRemNumVec;
        vector<int> oneRemNumVec;
        vector<int> twoRemNumVec;
        
        for (int val : nums) {
            int rem = val % 3;
            if (rem == 0) zeroRemNumVec.push_back(val);
            if (rem == 1) oneRemNumVec.push_back(val);
            if (rem == 2) twoRemNumVec.push_back(val);
        }

        sort(zeroRemNumVec.begin(), zeroRemNumVec.end(), greater<int>());
        sort(oneRemNumVec.begin(), oneRemNumVec.end(), greater<int>());
        sort(twoRemNumVec.begin(), twoRemNumVec.end(), greater<int>());

        int maxiSum = INT_MIN;
        
        if (zeroRemNumVec.size() >= 3) {
            int val1 = zeroRemNumVec[0] + zeroRemNumVec[1] + zeroRemNumVec[2];
            maxiSum = max(maxiSum, val1);
        }
        if (oneRemNumVec.size() >= 3) {
            int val2 = oneRemNumVec[0] + oneRemNumVec[1] + oneRemNumVec[2];
            maxiSum = max(maxiSum, val2);
        }
        if (twoRemNumVec.size() >= 3) {
            int val3 = twoRemNumVec[0] + twoRemNumVec[1] + twoRemNumVec[2];
            maxiSum = max(maxiSum, val3);
        }
        if (
            zeroRemNumVec.size() >= 1 && 
            oneRemNumVec.size() >= 1 && 
            twoRemNumVec.size() >= 1
        ) {
            int val4 = zeroRemNumVec[0] + oneRemNumVec[0] + twoRemNumVec[0];
            maxiSum = max(maxiSum, val4);
        }
        
        return maxiSum == INT_MIN ? 0 : maxiSum;
    }
};


// T.C. = O(n) + O(k*log(k)) + O(m*log(m)) + O(l(*log(l))) = O(n) + O(n*log(n)) = O(n*log(n)) 

// S.C. = O(k) + O(m) + O(l) + O(log(k)) + O(log(m)) + O(log(l)) -> these log terms are contributed to space complexity by C++ inbuilt intro-sort = O(n) 

// n = nums.size(), k = zeroRemNumVec.size(), m = oneRemNumVec.size(), l = twoRemNumVec.size(), (k + m + l == n) 