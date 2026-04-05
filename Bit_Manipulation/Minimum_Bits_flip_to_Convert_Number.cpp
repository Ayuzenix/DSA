#include<bits/stdc++.h>
using namespace std ;

// Problem : Minimum Bits flip to Convert Number 
// Platform : Leetcode 

class Solution {
public:
    int minBitFlips(int start, int goal) {
        int count = 0 ; 
        int m ;
        if ( start ==0 && goal == 0) {
            return 0 ;
        }
        if ( start > goal ) {
            m = (int)log2( start ) + 1 ; 
        } else {
            m = (int)log2( goal ) + 1 ;
        }
        for ( int i = 0 ; i < m ; i ++ ) {
            int x = ( start & ( 1<< i) ) ;
            int y = ( goal & ( 1 << i) ) ;
            if ( ( x ^ y ) !=0) {
                count ++ ;
            }
        }
        return count ; 
    }
};
