// LeetCode (3834. Merge Adjacent Equal Elements): 
// https://leetcode.com/problems/merge-adjacent-equal-elements 


// TAGS: [RATING: 1428], [MEDIUM], [OPTIMAL], [STL], [ARRAY], [STACK], [INTUITION INVERSION] 


#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    vector<long long> mergeAdjacent(vector<int>& nums) {
        
        int n = nums.size();

        vector<long long> ans;
        ans.push_back(nums[0]);

        if (n == 1) return ans;
        
        for (int i = 1; i < n; i++) {
            if (ans.back() == nums[i]) {
                ans.pop_back();
                long long sum = nums[i] + nums[i];

                while (!ans.empty() && ans.back() == sum) {
                    sum += sum;
                    ans.pop_back();
                }

                ans.push_back(sum);
            }
            else {
                ans.push_back(nums[i]);
            }
        }

        return ans;
    }
};


// T.C. = O(2n) = O(n) 
// S.C. = O(1) -> Auxiliary Space Complexity 


// Here this solution was needing a stack to build an answer, but above I have used vector to build the answer, because the answer has to be in vector at the end, and the vector can behave like stack so I used only vector, otherwise stack can also be used individually to build the answer and then you can put the final output from the stack into the vector - but skipped this approach 