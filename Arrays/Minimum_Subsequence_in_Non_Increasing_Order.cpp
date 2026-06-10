#include<bits/stdc++.h>
using namespace std ;

// Problem : Minimum Subsequence in Non-Increasing Order 
// Platform : Leetcode 

class Solution {
public:
    vector<int> minSubsequence(vector<int>& nums) {
        int n = nums.size() , total_sum = 0 ;
        for ( int i = 0 ; i < n ; i ++ ) {
             total_sum = total_sum + nums[i] ;
        }
        vector<int>result ;
        sort( nums.rbegin() , nums.rend() ) ;
        int curr = 0 ;
        for (int i = 0 ; i < n ; i ++ ) {
            curr = curr + nums[i] ;
            result.push_back( nums[i] ) ;
            if ( curr > ( total_sum - curr ) ) {
                return result ;
            }
        }
        return result ;
    }
};
