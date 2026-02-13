// LeetCode (3834. Merge Adjacent Equal Elements): 
// https://leetcode.com/problems/merge-adjacent-equal-elements 


// TAGS: [RATING: 1428], [MEDIUM], [NAIVE OPTIMAL], [STL], [ARRAY], [STACK], [REVERSING], [INTUITION INVERSION] 


#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    vector<long long> mergeAdjacent(vector<int>& nums) {
        
        int n = nums.size();

        stack<long long> st;
        st.push(nums[0]);
        
        for (int i = 1; i < n; i++) {
            if (st.top() == nums[i]) {
                st.pop();
                long long sum = nums[i] + nums[i];

                while (!st.empty() && st.top() == sum) {
                    sum += sum;
                    st.pop();
                }

                st.push(sum);
            }
            else {
                st.push(nums[i]);
            }
        }

        vector<long long> ans;
        while (!st.empty()) {
            ans.push_back(st.top());
            st.pop();
        }

        reverse(ans.begin(), ans.end());

        return ans;
    }
};


// T.C. = O(2n) + O(n) + O(n/2) = O(n) 
// S.C. = O(n) -> Auxiliary Space Complexity 