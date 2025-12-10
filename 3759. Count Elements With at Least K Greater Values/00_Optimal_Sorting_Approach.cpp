// LeetCode (3759. Count Elements With at Least K Greater Values):
// https://leetcode.com/problems/count-elements-with-at-least-k-greater-values


// TAGS: [RATING: 1372], [MEDIUM], [OPTIMAL], [ARRAY], [SORTING] 


#include<bits./stdc++.h>
using namespace std;


class Solution {
public:
    int countElements(vector<int>& nums, int k) {
        
        sort(nums.begin(), nums.end(), greater<int>());
        
        int n = nums.size();

        int i = 0;
        while (i < n) {

            int elementsProcessed = i;
            int currVal = nums[i];
            int lastProcessedEle = (i == 0) ? INT_MAX : nums[i-1];
            
            if (elementsProcessed >= k && lastProcessedEle > currVal) {
                break;
            }

            i++;
        }

        int ans = (n - i);

        return ans;
    }
};


// T.C. = O(n*log(n)) + O(n) = O(n*log(n))
// S.C. = O(log(n)) -> contributed by intro-sort  