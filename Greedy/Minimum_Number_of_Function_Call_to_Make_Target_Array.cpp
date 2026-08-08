#include<bits/stdc++.h>
using namespace std ;

// Problem : Minimum Numbers of Function Calls to Make Target Array 
// Platform : Leetcode 

class Solution {
public:

    int countOdd( int m ) {
        int count = 0 ;
        while ( m > 0 ) {
              if ( m % 2 == 0 ) {
                 m = m / 2 ;
              } else {
                count ++ ;
                m = m - 1 ;
              }
        }
        return count ;
    }

    int minOperations(vector<int>& nums) {
        int n = nums.size() , minOperations = 0 ;
        sort( nums.begin() , nums.end() ) ;
        int maxi = nums[n-1] ;
        while ( maxi > 0 ) {
               if ( maxi % 2 == 0 ) {
                   maxi = maxi / 2 , minOperations ++ ;
               } else {
                   maxi = ( maxi - 1 ) , minOperations ++ ;
               }
        }
        for ( int i = 0 ; i < n - 1 ; i ++ ) {
             if ( nums[i] == 1 ) {
                 minOperations = minOperations + 1 ;
             } else if ( nums[i] % 2 == 0 ) {
                 int x = countOdd( nums[i] ) ;
                 minOperations = minOperations + x ;
             } else {
                 int x = countOdd( nums[i] ) ;
                 minOperations = minOperations + x ;
             }
        }
        return minOperations ;
    }
};
