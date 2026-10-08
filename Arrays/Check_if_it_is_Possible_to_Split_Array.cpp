#include<bits/stdc++.h>
using namespace std ;

// Problem : Check if it is Possible to Split Array 
// Platform : Leetcode 

class Solution {
public:
    bool canSplitArray(vector<int>& nums, int m) {
        int n = nums.size() , maxSum = 0 ; 
        if ( n <= 2 ) {
            return true ; 
        }
        for ( int i = 0 ; i < n - 1 ; i ++ ) {
             maxSum = max( maxSum , ( nums[i] + nums[i+1] ) ) ;
        }
        return ( maxSum >= m ) ;
    }
};
