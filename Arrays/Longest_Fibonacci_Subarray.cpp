#include<bits/stdc++.h>
using namespace std ;

// Problem : Longest Fibonacci Subarray 
// Platform : Leetcode 

class Solution {
public:
    int longestSubarray(vector<int>& nums) {
         int n = nums.size() ;
        if ( n == 2 || n == 1 ) {
            return 1 ;
        }
        int ff_prev = nums[0] ;
        int f_prev = nums[1] ;
        int maxi = 0 , l = 0 ; 
        for ( int i = 2 ; i < n ; i ++ ) {
            if ( nums[i] == ( f_prev + ff_prev ) ) {
                 maxi = max ( maxi , ( i - l + 1 ) ) ;
                 f_prev = nums[i] ;
                 ff_prev = nums[i-1] ;
            } else {
                f_prev = nums[i] ;
                ff_prev = nums[i-1] ;
                l = i - 1 ;
            }

            if ( ( i - l + 1 ) <=2  ) {
                 maxi = max ( maxi , ( i - l + 1 ) ) ;
            }       
        }
        return maxi ;
    }
};
