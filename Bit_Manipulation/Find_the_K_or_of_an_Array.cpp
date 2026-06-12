#include<bits/stdc++.h>
using namespace std ;

// Problem : Find the K-or of an Array 
// Platform : Leetcode 

class Solution {
public:
    int findKOr(vector<int>& nums, int k) {
        int n = nums.size() ;
        vector<int>result( 32 ) ;
        for ( int i = 0 ; i < 32 ; i ++ ) {
             int count = 0 ;
             for ( int j = 0 ; j < n ; j ++ ) {
                  int curr = nums[j] ;
                  int toSet = ( curr & ( 1 << i ) ) ;
                  if ( toSet != 0 ) {
                    result[i] ++ ;
                  }
             }
        }
        int ans = 0 ;
        for ( int i = 0 ; i < 32 ; i ++ ) { 
             if ( result[i] >= k ) {
                 ans =  ( ans | ( 1 << i ) ) ;
             } else {
                 ans = ( ans | ( 0 << i ) ) ;
             }
        }
        return ans ;
    }
};
