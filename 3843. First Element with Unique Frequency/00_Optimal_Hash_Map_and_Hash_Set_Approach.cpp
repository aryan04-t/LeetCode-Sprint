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

        unordered_map<int, vector<int>> freqNumsMp;
        for (const pair<int, int> &p : numFreqMp) {
            int num = p.first;
            int freq = p.second;
            freqNumsMp[freq].push_back(num);
        }

        unordered_set<int> potentialAns;
        for (const pair<int, vector<int>> &p : freqNumsMp) {
            
            const vector<int> &numbers = p.second;
            int numbersCount = static_cast<int>(numbers.size());
            
            bool isFreqUnique = (numbersCount == 1);
            if (isFreqUnique) {
                potentialAns.insert(numbers[0]);
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


// T.C. = O(n) + O(m) + O(k) + O(n) = O(n + m + k) = O(n) 
// S.C. = O(m) + O(k + m) + O(l) = O(m + k + l) = O(n) 

// since l ≤ k ≤ m ≤ n 

/* 
Here, 
  --> n = total number of elements in vector<int> nums
  --> m = total number of distinct elements in nums
  --> k = total number of distinct frequencies of nums elements
  --> l = total number of elements whose frequency is unique as per question's definition of "unique" 
*/ 