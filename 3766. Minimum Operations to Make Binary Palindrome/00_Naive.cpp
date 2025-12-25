// LeetCode (3766. Minimum Operations to Make Binary Palindrome): 
// https://leetcode.com/problems/minimum-operations-to-make-binary-palindrome 


// TAGS: [RATING: 1656], [MEDIUM], [NAIVE], [PALINDROME], [BINARY NUMBER], [MINIMIZING] 


#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    bool isBinaryPalindrome (int num) {

        string binaryNum = "";
        
        while (num) {
            int digit = num % 2;
            binaryNum = static_cast<char>(digit + '0') + binaryNum;
            num /= 2;
        }

        int m = binaryNum.length();
        int i = 0;
        int j = m - 1;

        while (i < j) {
            if (binaryNum[i] != binaryNum[j]) {
                return false;
            }
            i++;
            j--;
        }

        return true;
    }

    vector<int> minOperations(vector<int>& nums) {
        
        vector<int> ans;

        for (int num : nums) {
            if (isBinaryPalindrome(num)) {
                ans.push_back(0);
            }
            else {
                int bigNum = num + 1;
                while (!isBinaryPalindrome(bigNum)) bigNum++;

                int smallNum = num - 1;
                while (!isBinaryPalindrome(smallNum)) smallNum--;

                int opsForBigNum = bigNum - num;
                int opsForSmallNum = num - smallNum;

                int minOps = (opsForBigNum < opsForSmallNum)
                    ? opsForBigNum
                    : opsForSmallNum;

                ans.push_back(minOps);
            }
        }

        return ans;
    }
};


// T.C. = O(n*(log(n) + k*log(max_num) + k*log(max_num))) = O(n*k*(log(max_num) to the base 2)) 
// S.C. = O(log(max_num)) -> for the binary string storage  

// n = length of the nums array, k = average number of iterations to find the nearest binary palindrome, max_num = maximum value in the array 