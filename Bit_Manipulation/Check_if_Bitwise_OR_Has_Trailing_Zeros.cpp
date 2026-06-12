#include<bits/stdc++.h>
using namespace std ;

// Problem : Check if Bitwise OR Has Trailing Zeros 
// Platform : Leetcode 

class Solution {
public:
    bool hasTrailingZeros(vector<int>& nums) {
         int n = nums.size() ;
         int count = 0 ;
         for ( int i = 0 ; i < n ; i ++ ) { 
            int x = nums[i] ;
            int curr = ( x & 1 ) ;
            if ( curr == 0 ) {
                count ++ ;
            }
            if ( count == 2 ) {
                break ;
            }
         }
         return ( count >=2 ) ;
    }
};
