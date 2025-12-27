// LeetCode (3779. Minimum Number of Operations to Have Distinct Elements): 
// https://leetcode.com/problems/minimum-number-of-operations-to-have-distinct-elements 


// TAGS: [RATING: 1444], [MEDIUM], [OPTIMAL], [ARRAY], [SIMULATION], [HASH MAP], [COUNTING] 


#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int minOperations(vector<int>& nums) {
        
        int n = nums.size();

        unordered_map<int, int> freqCount;
        int duplicates = 0;

        for (int i=0; i < n; i++) {
            int val = nums[i];
            if (freqCount[val] == 1) {
                duplicates++;
            }
            freqCount[val]++;
        }

        int ops = 0;
        for (int i=0; i < n; i+=3) {

            if (duplicates == 0) break;
            int j = i;

            while (j < n && j < i+3) {
                int val = nums[j];
                freqCount[val]--;

                if (freqCount[val] == 1) {
                    duplicates--;
                }
                j++;
            }

            ops++;
        }

        return ops;
    }
};


// T.C. = O(n) + O(n) = O(2n) = O(n) 
// S.C. = O(m) 

// m = total number of unique elements in nums 