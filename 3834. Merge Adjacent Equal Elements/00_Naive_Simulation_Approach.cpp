// LeetCode (3834. Merge Adjacent Equal Elements): 
// https://leetcode.com/problems/merge-adjacent-equal-elements 


// TAGS: [RATING: 1428], [MEDIUM], [NAIVE], [MLE ERROR], [STL], [ARRAY], [SIMULATION] 


#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    vector<long long> mergeAdjacent(vector<int>& nums) {
        
        vector<long long> ans(nums.begin(), nums.end());

        bool isAnsChanging = true;
        while (isAnsChanging) {

            int n = ans.size();
            vector<long long> newAns;
            
            bool oneMergeDone = false;
            int i = 0;

            while (i < n) {
                if (
                    !oneMergeDone && 
                    i < n-1 && 
                    ans[i] == ans[i+1] 
                ) {
                    long long sum = ans[i] + ans[i+1];
                    newAns.push_back(sum);
                    
                    oneMergeDone = true;
                    i += 2;
                }
                else {
                    newAns.push_back(ans[i]);
                    i++;
                }
            }

            int m = newAns.size();
            ans = move(newAns);

            if (m == n) {
                isAnsChanging = false;
            }
        }

        return ans;
    }
};


// T.C. = O(n^2) 
// S.C. = O(n) -> Auxiliary Space Complexity 