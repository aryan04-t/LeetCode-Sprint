// LeetCode (234. Palindrome Linked List): 
// https://leetcode.com/problems/palindrome-linked-list 


// TAGS: [RATING: N/A], [EASY], [NAIVE], [LINKED LIST], [REVERSING LINKED LIST], [DUPLICATING LINKED LIST], [PALINDROME] 


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
private:
    ListNode* duplicateLL(ListNode* head) {

        ListNode* newHead = nullptr;
        ListNode* prevNode = nullptr;
        ListNode* currNode = head;

        while (currNode != nullptr) {
            
            ListNode* newNode = new ListNode(currNode->val);
            if (newHead == nullptr) newHead = newNode;
            
            if (prevNode) prevNode->next = newNode;
            prevNode = newNode;

            currNode = currNode->next;
        }

        return newHead;
    }

    ListNode* reverseLL(ListNode* head) {

        ListNode* prevNode = nullptr;
        ListNode* currNode = head;
        ListNode* nextNode = nullptr;

        while (currNode != nullptr) {
            nextNode = currNode->next;
            currNode->next = prevNode;

            prevNode = currNode;
            currNode = nextNode;
        }

        return prevNode;
    }

    int getLength(ListNode *head) {
        
        int len = 0;

        while (head != nullptr) {
            len++;
            head = head->next;
        }

        return len;
    }

public:
    bool isPalindrome(ListNode* head) {
        
        ListNode* newHead = duplicateLL(head);
        newHead = reverseLL(newHead);

        int len = getLength(head);

        int i = 0;
        while (i < len/2) {
            if (head->val != newHead->val) return false;
            head = head->next;
            newHead = newHead->next;
            i++;
        }

        return true;
    }
};


// T.C. = O(n) + O(n) + O(n) + O(n/2) = O(n) 
// S.C. = O(n) 

// Here, n = the length of given LL 