// LeetCode (581. Shortest Unsorted Continuous Subarray): 
// https://leetcode.com/problems/shortest-unsorted-continuous-subarray 


// TAGS: [RATING: N/A], [MEDIUM], [OPTIMAL], [STL], [ARRAY], [SUBARRAY], [SORTING], [TWO POINTER], [MONOTONIC VIOLATION] 


#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        
        int n = nums.size();
        if (n == 1) return 0;

        vector<int> sortedNums = nums;
        sort(sortedNums.begin(), sortedNums.end());

        int i = 0;
        while (i < n && nums[i] == sortedNums[i]) {
            i++;
        }

        bool isArraySorted = (i == n);
        if (isArraySorted) return 0;

        int j = n-1;
        while (j >= 0 && nums[j] == sortedNums[j]) {
            j--;
        }

        int ans = j - i + 1;

        return ans;
    }
};


// T.C. = O(n) + O(n*log(n)) + O(n) + O(n) = O(n*log(n)) 
// S.C. = O(n) + O(log(n)) = O(n) 