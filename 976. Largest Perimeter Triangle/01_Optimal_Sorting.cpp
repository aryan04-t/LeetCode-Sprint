// 976. Largest Perimeter Triangle
// https://leetcode.com/problems/largest-perimeter-triangle 


#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        
        int n = nums.size();
        sort(nums.begin(), nums.end());

        for (int i=n-1; i >= 2; i--) {
            
            int c = nums[i];
            int b = nums[i-1];
            int a = nums[i-2];

            if (a + b > c)  {
                int largestPerimeter = a + b + c;
                return largestPerimeter;
            }
        }

        return 0;
    }
};


// T.C. = O(n*log(n)) + O(n) = O(n*log(n)) 
// S.C. = O(log(n)) -> contributed by sort 

// Here, n = nums.size() 