// LeetCode (1161. Maximum Level Sum of a Binary Tree): 
// https://leetcode.com/problems/maximum-level-sum-of-a-binary-tree 


// TAGS: [RATING: 1249], [MEDIUM], [NAIVE OPTIMAL], [STL], [TREE], [BINARY TREE], [BFS], [BINARY TREE BFS], [QUEUE], [HASH MAP], [TREE LEVEL SUM], [SUM], [MAXIMIZING], [MINIMIZING] 


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
        
        queue<pair<TreeNode*, int>> q;
        q.push({ root, 1 });

        unordered_map<int, int> levelSum;

        while (!q.empty()) {
            auto [node, level] = q.front();
            q.pop();

            if (node->left != nullptr) {
                q.push({ node->left, level + 1 });
            }
            if (node->right != nullptr) {
                q.push({ node->right, level + 1 });
            }
            
            levelSum[level] += node->val;
        }

        int maxSum = INT_MIN;
        int maxSumMinLevel = INT_MAX;

        for (const pair<int, int> p : levelSum) {
            int level = p.first;
            int sum = p.second;
            if (
                (sum > maxSum) || 
                (sum == maxSum && level < maxSumMinLevel)
            ) {
                maxSum = sum;
                maxSumMinLevel = level;
            }
        }

        return maxSumMinLevel;
    }
};


// T.C. = O(n) + O(l) = O(n + l) 
// S.C. = O(n) + O(l) = O(n + l) 

// n = total number of nodes in the tree, l = total number of levels in the tree 