// LeetCode (1266. Minimum Time Visiting All Points): 
// https://leetcode.com/problems/minimum-time-visiting-all-points 


// TAGS: [RATING: 1302], [EASY], [OPTIMAL], [MATH], [GEOMETRY], [GREEDY], [INTUITION INVERSION] 


#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        
        int n = points.size();
        int minTime = 0;

        for (int i=1; i < n; i++) {
            vector<int> point1 = points[i-1];
            vector<int> point2 = points[i];
            
            int xDiff = abs(point1[0] - point2[0]);
            int yDiff = abs(point1[1] - point2[1]);
            
            int noPair = abs(xDiff - yDiff);
            minTime += noPair;

            int pairs = (xDiff + yDiff - noPair)/2;
            minTime += pairs;
        }

        return minTime;
    }
};


// T.C. = O(n) 
// S.C. = O(1) 