#include<bits/stdc++.h>
using namespace std ;

// Problem : Reverse Bit 
// Platform : Leetcode 

class Solution {
public:
    int reverseBits(int n) {
        int ans = 0 ; 
        for ( int i = 0 ; i < 32 ; i ++ ) {
            int x = ( n & 1 ) ;
            ans = ( ans << 1 ) ;
            ans = ( ans | x ) ;
            n = ( n >> 1 ) ;
        }
        return ans ;
    }
};
