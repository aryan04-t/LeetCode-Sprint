// LeetCode (3843. First Element with Unique Frequency): 
// https://leetcode.com/problems/first-element-with-unique-frequency 


// TAGS: [RATING: N/A], [MEDIUM], [OPTIMAL], [STL], [ARRAY], [HASH MAP], [HASH SET], [FREQUENCY GROUPING] 


#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int firstUniqueFreq(vector<int>& nums) {
        
        unordered_map<int, int> numFreqMp;
        for (int val : nums) numFreqMp[val]++;

        unordered_set<int> potentialAns;
        unordered_map<int, vector<int>> freqNumsMp;
        
        for (const pair<int, int> &p : numFreqMp) {
            int num = p.first;
            int freq = p.second;
        
            if (!freqNumsMp.count(freq)) {
                potentialAns.insert(num);
                freqNumsMp[freq].push_back(num);
            }
            else if (freqNumsMp[freq].size() == 1) {
                potentialAns.erase(freqNumsMp[freq][0]);
                freqNumsMp[freq].push_back(num);
            }
        }

        for (int val : nums) {
            if (potentialAns.count(val)) {
                return val;
            }
        }

        return -1;
    }
};


// T.C. = O(n) + O(m) + O(n) = O(n + m) = O(n) 
// S.C. = O(m) + O(k) + O(l) = O(m + k + l) = O(n) 

// since l ≤ k ≤ m ≤ n 

/* 
Here, 
  --> n = total number of elements in vector<int> nums
  --> m = total number of distinct elements in nums
  --> k = total number of distinct frequencies of nums elements
  --> l = total number of elements whose frequency is unique as per question's definition of "unique" 
*/