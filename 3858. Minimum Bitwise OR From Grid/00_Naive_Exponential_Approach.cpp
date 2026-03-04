// LeetCode (3858. Minimum Bitwise OR From Grid): 
// https://leetcode.com/problems/minimum-bitwise-or-from-grid 


// TAGS: [RATING: N/A], [MEDIUM], [NAIVE], [TLE ERROR], [STL], [2D ARRAY], [RECURSION], [MATRIX DFS], [MINIMIZING], [BIT MANIPULATION], [EXPONENTIAL RECURSION TC ANALYSIS] 


#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    void allCombinationsTraversal(
        const vector<vector<int>> &grid,
        int i,
        const int &m,
        int oredVal,
        int &minOredVal
    ) {
        if (i == m) {
            minOredVal = min(oredVal, minOredVal);
            return;
        }

        for (int val : grid[i]) {
            allCombinationsTraversal(
                grid,
                i + 1,
                m,
                oredVal | val,
                minOredVal
            );
        }
    }

    int minimumOR(vector<vector<int>>& grid) {

        int i = 0;
        int m = grid.size();

        int minOredVal = INT_MAX;
        int oredVal = 0;

        allCombinationsTraversal(grid, i, m, oredVal, minOredVal);

        return minOredVal;
    }
};


// T.C. = O(n^m) 
// S.C. = O(m) -> caused by recursion call stack 