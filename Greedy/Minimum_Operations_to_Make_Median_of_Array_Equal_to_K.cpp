#include<bits/stdc++.h>
using namespace std ;

// Problem : Minimum Operations to Make Median of Array Equal to K 
// Platform : Leetcode 

class Solution {
public:
    long long minOperationsToMakeMedianK(vector<int>& nums, int k) {
         int n = nums.size() ; 
         sort( nums.begin() , nums.end() ) ;
         long long currMedian , currSteps = 0 ;
          int till ;
         if ( n % 2 != 0 ) {
             currMedian = nums[n/2] ;
             till = n / 2 ;
         } else {
             currMedian = max( nums[( n - 1 )/2] , nums[n/2] ) ;
             till = max( ( n - 1 ) / 2 , ( n / 2 ) ) ;
         }
         if ( currMedian == k ) {
             return 0 ;
         }
         if ( currMedian > k ) {
             for ( int i = 0 ; i <= till ; i ++ ) {
                  if ( nums[i] > k ) {
                     currSteps = currSteps + ( nums[i] - k ) ;
                  }
             }
         } else {
            for ( int i = n - 1 ; i >= till ; i -- ) {
                 if ( nums[i] < k ) {
                     currSteps = currSteps + ( k - nums[i] ) ;
                 }
            }
         }
         return currSteps ;
    }
};
