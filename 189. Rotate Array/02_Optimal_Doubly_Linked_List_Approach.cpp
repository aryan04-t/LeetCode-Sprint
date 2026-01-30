// LeetCode (189. Rotate Array): 
// https://leetcode.com/problems/rotate-array 


// TAGS: [RATING: N/A], [MEDIUM], [OPTIMAL], [STL], [ARRAY], [ROTATE ARRAY], [ROTATE ARRAY FROM RIGHT], [SIMULATION], [CYCLIC NATURE], [MATH], [MODULAR ARITHMETIC], [LINKED LIST], [STL DOUBLY LINKED LIST] 


#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    void rotateArray(vector<int> &nums, int k) {

        int n = nums.size();

        // make a doubly-linked list using nums 
        list<int> numsList;
        for (int i = 0; i < n; i++) {
            numsList.push_back(nums[i]);
        }

        // do rotations 
        while (k--) {
            int val = numsList.back();
            numsList.pop_back();
            numsList.push_front(val);
        }

        // copy back final rotated sequence to nums
        list<int>::iterator it = numsList.begin();
        for (int i = 0; i < n; i++) {
            nums[i] = *it;
            it++;
        }
    }

    void rotate(vector<int>& nums, int k) {
        
        int n = nums.size();
        if (n == 0) return;
        
        k %= n;
        if (k == 0) return;

        rotateArray(nums, k);
    }
};


// T.C. = O(n + k + n) = O(2n + k) = O(n) 
// S.C. = O(n) 