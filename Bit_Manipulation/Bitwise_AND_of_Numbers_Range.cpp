#include<bits/stdc++.h>
using namespace std ;

// Problem : Bitwise AND of Numbers Range 
// Platform : Leetcode 

class Solution {
public: // --> By Equal Longest Common Prefix Method 
    int rangeBitwiseAnd(int left, int right) {
        int count = 0 ; 
        for ( int i = 0 ; i < 32 ; i ++ ) {
              if ( left == right ) {
                break ;
              }
              left = left >> 1 ;
              right = right >> 1 ;
              count ++ ;
        }
        while ( count !=0 ) {
            left = left << 1 ;
            right = right << 1 ;
            count -- ;
        }
        return left ;
    }
};
