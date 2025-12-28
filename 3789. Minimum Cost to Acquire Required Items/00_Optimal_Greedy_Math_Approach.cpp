// LeetCode (3789. Minimum Cost to Acquire Required Items): 
// https://leetcode.com/problems/minimum-cost-to-acquire-required-items 


// TAGS: [RATING: N/A], [MEDIUM], [OPTIMAL], [STL], [GREEDY], [MATH], [MINIMIZING] 


#include<bits/stdc++.h> 
using namespace std; 


class Solution {
public:
    long long minimumCost(int cost1, int cost2, int costBoth, int need1, int need2) {

        long long llCost1 = cost1;
        long long llCost2 = cost2;
        long long llNeed1 = need1; 
        long long llNeed2 = need2;
        long long llCostBoth = costBoth;

        long long allType1 = llCost1 * llNeed1;
        long long allType2 = llCost2 * llNeed2;
        long long totalCost1 = allType1 + allType2;

        long long allType3 = max(llNeed1, llNeed2) * llCostBoth;
        long long totalCost2 = allType3;
        
        long long minType3 = min(llNeed1, llNeed2) * llCostBoth;
        long long totalCost3 = minType3;

        if (llNeed1 > llNeed2) {
            long long restType1 = llNeed1 - llNeed2;
            totalCost3 += restType1 * llCost1;
        }
        else if (llNeed2 > llNeed1) {
            long long restType2 = llNeed2 - llNeed1;
            totalCost3 += restType2 * llCost2;
        }

        long long minCost = min(totalCost1, totalCost2);
        minCost = min(minCost, totalCost3);

        return minCost;
    }
};


// T.C. = O(1) 
// S.C. = O(1) 