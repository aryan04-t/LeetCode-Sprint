// LeetCode (1161. Maximum Level Sum of a Binary Tree): 
// https://leetcode.com/problems/maximum-level-sum-of-a-binary-tree 


// TAGS: [RATING: 1249], [MEDIUM], [NAIVE OPTIMAL], [STL], [TREE], [BINARY TREE], [DFS], [BINARY TREE DFS], [HASH MAP], [TREE LEVEL SUM], [SUM], [MAXIMIZING], [MINIMIZING] 


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
    void dfs(
        TreeNode* root, 
        int level, 
        unordered_map<int, int> &levelSum
    ) {
        if (root == nullptr) return;

        levelSum[level] += root->val;

        dfs(root->left, level + 1, levelSum);
        dfs(root->right, level + 1, levelSum);
    }

    int maxLevelSum(TreeNode* root) {
        
        unordered_map<int, int> levelSum;

        dfs(root, 1, levelSum);

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
// S.C. = O(l) + O(l) -> { recusrion stack space + hash map } = O(l) 

// n = total number of nodes in the tree, l = total number of levels in the tree 