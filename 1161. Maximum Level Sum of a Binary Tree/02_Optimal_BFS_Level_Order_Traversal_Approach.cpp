// LeetCode (1161. Maximum Level Sum of a Binary Tree): 
// https://leetcode.com/problems/maximum-level-sum-of-a-binary-tree 


// TAGS: [RATING: 1249], [MEDIUM], [OPTIMAL], [STL], [TREE], [BINARY TREE], [BFS], [BINARY TREE BFS], [QUEUE], [BINARY TREE LEVEL ORDER TRAVERSAL] [TREE LEVEL SUM], [SUM], [MAXIMIZING], [MINIMIZING] 


#include<bits/stdc++.h>
using namespace std;


// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};



class Solution {
public:
    int maxLevelSum(TreeNode* root) {
        
        queue<TreeNode*> q;
        q.push(root);

        int level = 1;
        int maxSum = INT_MIN;
        int maxSumMinLevel = INT_MAX;

        while (!q.empty()) {

            int levelSize = q.size();
            int currSum = 0;

            while (levelSize--) {
                TreeNode* currNode = q.front();
                q.pop();

                if (currNode->left != nullptr) {
                    q.push(currNode->left);
                }
                if (currNode->right != nullptr) {
                    q.push(currNode->right);
                }

                currSum += currNode->val;
            }
            
            if (currSum > maxSum) {
                maxSum = currSum;
                maxSumMinLevel = level;
            }

            level++;
        }
        
        return maxSumMinLevel;
    }
};


// T.C. = O(n) 
// S.C. = O(n) 

// n = total number of nodes in the tree 