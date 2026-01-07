// LeetCode (1390. Four Divisors): 
// https://leetcode.com/problems/four-divisors 


// TAGS: [RATING: 1478], [MEDIUM], [OPTIMAL], [STL], [ARRAY], [MATH], [DIVISOR], [FINDING DIVISORS & COMPLEMENTARY DIVISOR PAIRS], [FOUR DIVISORS], [SUM], [HASH MAP], [MEMOIZATION] 


#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {
        
        int n = nums.size();
        unordered_map<int, int> cache;

        int totalDivisorsSum = 0;

        for (int i=0; i < n; i++) {
            int num = nums[i];

            if (cache.count(num)) {
                if (cache[num] != -1) {
                    totalDivisorsSum += cache[num];
                }
                continue;
            }

            int sqrtNum = sqrt(num);
            
            int divisorsCount = 0; 
            int divisorsSum = 0; 
            
            for (int divisor=1; divisor <= sqrtNum; divisor++) {
                
                int remainder = num % divisor;

                if (remainder == 0) {
                    divisorsCount++;
                    divisorsSum += divisor;

                    int quotient = num / divisor;
                    if (divisor != quotient) {    // not a perfect square 
                        divisorsCount++;
                        divisorsSum += quotient;
                    }
                }

                if (divisorsCount > 4) break;
            }

            if (divisorsCount == 4) {
                cache[num] = divisorsSum;
                totalDivisorsSum += divisorsSum;
            }
            else cache[num] = -1;
        }

        return totalDivisorsSum;
    }
};


// T.C. = O(n*sqrt(m)) 
// S.C. = O(n) 

// Here, m = the average of all values of nums 