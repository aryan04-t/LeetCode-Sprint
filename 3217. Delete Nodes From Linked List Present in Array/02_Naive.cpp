// LeetCode (3217. Delete Nodes From Linked List Present in Array): 
// https://leetcode.com/problems/delete-nodes-from-linked-list-present-in-array


// TAGS: [RATING: 1341], [MEDIUM], [NAIVE], [TLE ERROR], [LINKED LIST] 


// This is navie approach, gives TLE error as expected, but I just wanted to implement it, nothing else 


#include<bits/stdc++.h>
using namespace std;


// Definition for singly-linked list.
    
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};


class Solution {
public:
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        
        ListNode* newHead = head;

        for (int deleteVal : nums) {
            ListNode* tempNewHead = nullptr;
            ListNode* currNode = newHead;
            ListNode* lastNonDeletedNode = nullptr;

            while (currNode != nullptr) {
                int nodeVal = currNode->val;

                if (nodeVal != deleteVal) {
                    if (tempNewHead == nullptr) tempNewHead = currNode;
                    if (lastNonDeletedNode) {
                        lastNonDeletedNode->next = currNode;
                    }
                    lastNonDeletedNode = currNode;
                }

                currNode = currNode->next;
            }

            lastNonDeletedNode->next = nullptr;

            newHead = tempNewHead;
        }

        return newHead;
    }
};


// T.C. = O(n * m) 
// S.C. = O(1) 

// Here, n = length of nums, m = length of input LL