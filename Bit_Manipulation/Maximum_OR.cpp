#include<bits/stdc++.h>
using namespace std ;

// Problem : Maximum OR 
// Platform : Leetcode 

class Solution {
public:
    long long maximumOr(vector<int>& nums, int k) {
         long long n = nums.size() ;
         vector<int>prefix( n , 0 ) ;
         vector<int>suffix( n , 0 ) ;
         for ( int i = 1 ; i < nums.size() ; i ++ ) {
             prefix[i] = nums[i-1] | prefix[i-1] ;
         }
         for ( int i = n - 2 ; i >=0 ; i -- ) {
            suffix[i] = nums[i+1] | suffix[ i + 1 ] ;
         }
         long long maxi = 0 ;
         for ( int i = 0 ; i < n ; i ++ ) {
             long long  curr = prefix[i] | suffix[i] | (long long) nums[i] << k ;
             if ( curr > maxi ) {
                maxi = curr ;
             }
         }
         return maxi ;
    } 
};
