// LeetCode (1390. Four Divisors): 
// https://leetcode.com/problems/four-divisors 


// TAGS: [RATING: 1478], [MEDIUM], [NAIVE], [ARRAY], [MATH], [DIVISORS], [SUM], [HASH MAP], [MEMOIZATION] 


#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {
        
        int n = nums.size();
        unordered_map<int, int> numFourDivisorSum;

        int totalDivisorsSum = 0;

        for (int i = 0; i < n; i++) {
            int num = nums[i];

            if (numFourDivisorSum.count(num)) {
                if (numFourDivisorSum[num] == -1)
                    continue;
                else {
                    totalDivisorsSum += numFourDivisorSum[num];
                    continue;
                }
            }

            int divisors = 2;
            int divisorsSum = 1 + num;

            for (int divisor = 2; divisor <= num / 2; divisor++) {

                if (num % divisor == 0) {
                    divisors++;
                    divisorsSum += divisor;
                }
                if (divisors > 4) {
                    numFourDivisorSum[num] = -1;
                    break;
                }
            }

            if (divisors == 4) {
                numFourDivisorSum[num] = divisorsSum;
                totalDivisorsSum += divisorsSum;
            }
            else if (divisors < 4) {
                numFourDivisorSum[num] = -1;
            }
        }

        return totalDivisorsSum;
    }
};


// T.C. = O(n*(m/2)) = O(n*m) 
// S.C. = O(n) -> caused by hash map 

// m = average of all values in nums 