#include<bits/stdc++.h>
using namespace std ;

// Problem : Maximize Expression of Three Elements 
// Platform : Leetcode 

class Solution {
public:
    int maximizeExpressionOfThree(vector<int>& nums) {
        sort( nums.begin() , nums.end() ) ;
        int n = nums.size() , a = nums[n-1] , b = nums[n-2] , c = nums[0] ;
        return ( a + b - c ) ;
    }
};
