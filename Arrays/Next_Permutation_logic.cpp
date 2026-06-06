#include<bits/stdc++.h>
using namespace std ;

// Problem : Next Permutation 
// Platform : Leetcode 

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
         int n = nums.size() ;
         int idx = -1 ;
         for ( int i = n - 2 ; i >= 0 ; i -- ) {
              if ( nums[i] < nums[i+1] ) {
                  idx = i ;
                  break ;
              }
         }
         if ( idx == -1 ) {
             sort( nums.begin() , nums.end() ) ;
         } else {
             int nearest = INT_MAX ;
             int k = -1 ;
             for ( int i = n-1 ; i > idx ; i -- ) {
                 if ( nums[i] > nums[idx] ) {
                      if ( nums[i] < nearest ) {
                           nearest = nums[i] ;
                           k = i ;
                      }
                 }
             }
             swap( nums[idx] , nums[k] ) ;
             sort( nums.begin() + ( idx + 1 ) , nums.end() ) ;
         }
         return ;
    }
};
