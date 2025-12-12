// LeetCode (3755. Find Maximum Balanced XOR Subarray Length): 
// https://leetcode.com/problems/find-maximum-balanced-xor-subarray-length 


// TAGS: [RATING: 1663], [MEDIUM], [NAIVE OPTIMAL], [TLE ERROR], [ARRAY], [SUBARRAY], [PREFIX SUM], [HASH MAP], [BIT MANIPULATION], [MAXIMIZING LENGTH], [EVEN AND ODD] 


#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int maxBalancedSubarray(vector<int>& nums) {
        
        int n = nums.size();

        unordered_map<int, vector<int>> xorIndexMp;
        xorIndexMp[0] = { -1 };

        unordered_map<int, pair<int, int>> indexOddEvenMp;
        indexOddEvenMp[-1] = { 0, 0 };

        int xored = 0;
        int odd = 0, even = 0;
        int maxi = INT_MIN;

        for (int i = 0; i < n; i++) {
            int val = nums[i];
            xored ^= val;
            
            bool isOdd = val & 1;
            if (isOdd) odd++;
            else even++;

            if (xorIndexMp.count(xored)) {
                const vector<int> &indexes = xorIndexMp[xored];
                
                for (int left : indexes) {
                    int leftOdds = indexOddEvenMp[left].first;
                    int leftEvens = indexOddEvenMp[left].second;

                    int oddsInRange = odd - leftOdds;
                    int evensInRange = even - leftEvens;

                    if (oddsInRange == evensInRange) {
                        int right = i;
                        int len = right - left;
                        maxi = max(maxi, len);
                        break;
                    }
                }
            }

            xorIndexMp[xored].push_back(i);
            indexOddEvenMp[i] = { odd, even };
        }

        if (maxi == INT_MIN) maxi = 0;

        return maxi;
    }
};


// T.C. = O(n^2) -> [Best Case: O(n), Worst Case: O(n^2)] 
// S.C. = O(n) 