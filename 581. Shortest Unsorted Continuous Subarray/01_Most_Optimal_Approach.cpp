// LeetCode (581. Shortest Unsorted Continuous Subarray): 
// https://leetcode.com/problems/shortest-unsorted-continuous-subarray 


// TAGS: [RATING: N/A], [MEDIUM], [MOST OPTIMAL], [STL], [ARRAY], [SUBARRAY], [TWO POINTER], [MONOTONIC VIOLATION] 


#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        
        int n = nums.size();
        if (n == 1) return 0;

        // Find the left boundary where sorting breaks (first dip)
        int i = 0;
        while (i < n-1 && nums[i] <= nums[i+1]) {
            i++;
        }

        // If no dip found, array is already sorted
        bool isArraySorted = (i == n-1);
        if (isArraySorted) return 0;

        // Find the right boundary where sorting breaks (first rise from right)
        int j = n-1;
        while (j >= 1 && nums[j-1] <= nums[j]) {
            j--;
        }

        // Find min and max of the unsorted window [i, j]
        int mini = INT_MAX;
        int maxi = INT_MIN;
        for (int k = i; k <= j; k++) {
            mini = min(mini, nums[k]);
            maxi = max(maxi, nums[k]);
        }

        // Expand left boundary: include any elements greater than window's min
        int ii = i - 1;
        while (ii >= 0 && mini < nums[ii]) {
            ii--;
        }
        i = ii + 1;

        // Expand right boundary: include any elements smaller than window's max
        int jj = j + 1;
        while (jj < n && maxi > nums[jj]) {
            jj++;
        }
        j = jj - 1;

        int ans = j - i + 1;

        return ans;
    }
};


// T.C. = O(n) 
// S.C. = O(1)