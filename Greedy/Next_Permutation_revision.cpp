#include<bits/stdc++.h>
using namespace std ;

// Problem : Next Permutation ( Revision ) 
// Platform : leetcode 

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
         int n = nums.size() , idx = -1 ;
         for ( int i = n - 1 ; i > 0 ; i -- ) {
             if ( nums[i] > nums[i-1] ) {
                 idx = i ;
                 break ;
             }
         }
         if ( idx == -1 ) {
            sort( nums.begin() , nums.end() ) ;
            return ;
         }
         int maxi = nums[idx] , idx1= idx ;
         for ( int i = idx ; i < n ; i ++ ) {
              if ( nums[i] < nums[idx] && nums[i] > nums[idx-1] ) {
                 idx1 = i;
              }
         }
         swap( nums[idx-1] , nums[idx1] ) ;
         sort( nums.begin() + idx , nums.end() ) ;
         return  ;
    }
};
