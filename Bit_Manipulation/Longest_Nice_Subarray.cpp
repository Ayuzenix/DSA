#include<bits/stdc++.h>
using namespace std ;

// Problem : Longest Nice Subarray 
// Platform : Leetcode 

class Solution {
public:

    bool toCheck( vector<int>&store ) { 
         for ( int i = 0 ; i < 32 ; i ++ ) { 
              if( store[i] > 1 ) {
                 return false ;
              }
         }
         return true ;
    }

    int longestNiceSubarray(vector<int>& nums) {
        int n = nums.size() , maxlen = 0 , l = 0 , r = 0 ;
        vector<int>store( 32 , 0 ) ;
        while ( r < n ) { 
              int x = nums[r] ;
              for ( int i = 0 ; i < 32 ; i ++ ) {
                   int curr = ( x & ( 1 << i ) ) ;
                   if ( curr != 0 ) {
                      store[i] ++ ;
                   }
              }
              while ( ( l < r ) && toCheck( store ) == false ) { 
                   int y = nums[l] ;
                   for ( int i = 0 ; i < 32 ; i ++ ) {
                       int curr = ( y & ( 1 << i ) ) ;
                       if ( store[i] > 0 && curr != 0 ) {
                         store[i] -- ;
                       }
                   }
                   l ++ ;
              }
              maxlen = max( maxlen , ( r - l + 1 ) ) ;
              r ++ ;
        } 
        return maxlen ;
    }
};
