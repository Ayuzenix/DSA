#include<bits/stdc++.h>
using namespace std ;

// Problem : Maximum Sum Circular Subarray 
// Platform : Leetcode 

class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int n = nums.size() ;
        int maxi = INT_MIN , sum = 0 ; 
        for ( int i = 0 ; i < n ; i ++ ) {
             if ( ( sum + nums[i] ) < 0 ) {
                 sum = 0 ;
             } else {
                sum = sum + nums[i] ;
                maxi = max( maxi , sum ) ;
             }
        }
        if ( maxi == INT_MIN ) {
            maxi = *max_element( nums.begin() , nums.end() ) ;
        }
        int mini = INT_MAX , total = 0 ;
        sum = 0 ; 
        for ( int i = 0 ; i < n ; i ++ ) {
             if ( ( sum + nums[i] ) > 0 ) {
                 sum = 0 ;
             } else {
                sum = sum + nums[i] ;
                mini = min( mini , sum ) ;
              }
              total = total + nums[i] ;
        }
        if ( mini == INT_MAX ) {
            mini = *min_element( nums.begin() , nums.end() ) ;
        }
        if ( total < 0 && mini < 0 && ( total <= mini )  ) {
            return maxi ; 
        } 
        return max( maxi , total - mini ) ;
    }
};
