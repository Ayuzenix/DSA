#include<bits/stdc++.h>
using namespace std ;

// Problem : Construct the Minimum Bitwise Array II 
// Platform : Leetcode 

class Solution {
public:
    vector<int> minBitwiseArray(vector<int>& nums) {
          int n = nums.size() ;
         vector<int>result( n ) ;
         for ( int i = 0 ; i < n ; i ++ ) { 
              int x = nums[i] , curr = -1 ;
              for ( int j = 0 ; j < ( log2(x) + 1 ) ; j ++ ) {
                 int m = ( x & ( 1 << j ) ) ;
                 if ( m == 0 ) {
                    break ;
                 }
                 curr = ( x ^ ( 1 << j ) ) ;
              }
              result[i] = curr ;
         }
        return result ;
    }
};
