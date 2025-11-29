// LeetCode (3217. Delete Nodes From Linked List Present in Array): 
// https://leetcode.com/problems/delete-nodes-from-linked-list-present-in-array


// TAGS: [RATING: 1341], [MEDIUM], [OPTIMAL], [LINKED LIST], [HASH SET]


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
        
        unordered_set<int> st(nums.begin(), nums.end());

        ListNode* prevNode = nullptr;
        ListNode* currNode = head;
        ListNode* newHead = nullptr;

        while (currNode != nullptr) {
            ListNode* nextNode = currNode->next;

            if (st.count(currNode->val)) {
                if (prevNode) prevNode->next = nextNode;
                currNode = nextNode;
            }
            else {
                if (newHead == nullptr) newHead = currNode; 
                prevNode = currNode;
                currNode = nextNode;
            }
        }

        return newHead;
    }
};


// T.C. = O(n + m) 
// S.C. = O(n) 

// Here, n = length of nums, m = length of input LL 