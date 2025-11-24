// LeetCode (3228. Maximum Number of Operations to Move Ones to the End):
// https://leetcode.com/problems/maximum-number-of-operations-to-move-ones-to-the-end


// Naive Approach, will give TLE error


#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    bool areAllOnesAtEnd (const string &s) {

        int n = s.length();
        bool onesStarted = false;
        bool allOnesAtEnd = true;

        for (int i=0; i < n; i++) {
            if (!onesStarted) {
                if (s[i] == '1') onesStarted = true;
            }
            else if (onesStarted) {
                if (s[i] == '0') {
                    allOnesAtEnd = false;
                    break;
                }
            } 
        }

        return allOnesAtEnd;
    }

    int maxOperations(string s) {
        
        int n = s.length();
        bool allOnesAtEnd = areAllOnesAtEnd(s);
        int movingOneIndex = -1;
        int maxOps = 0;

        while (!allOnesAtEnd) {
            for (int i=0; i < n; i++) {
                if (s[i] == '1' && (i+1 < n && s[i+1] == '0')) {
                    movingOneIndex = i;
                    s[i] = '0';
                }
                else if (s[i] == '0' && (i+1 == n || s[i+1] == '1')) {
                    if (movingOneIndex != -1) {
                        s[i] = '1';
                        maxOps += 1;
                        movingOneIndex = -1;
                    }
                }
            }
            allOnesAtEnd = areAllOnesAtEnd(s);
        }

        return maxOps;
    }
};


// T.C. = O(n^2) 
// S.C. = O(1) 