#include<bits/stdc++.h>
using namespace std ;

// Problem : Number of Bit Changes to Make Two Integers Equal 
// Platform : Leetcode 

class Solution {
public:
    int minChanges(int n, int k) {
        int x = log2( n ) + 1 ;
        if ( k > n ) {
            return -1 ;
        } 
        int count = 0 ;
        for ( int i = 0 ; i < x ; i ++ ) {
            int v1 = ( n & ( 1 << i ) ) ;
            int v2 = ( k & ( 1 << i ) ) ;
            if ( v1 == v2 ) {
                continue ;
            }else if ( v1 != 0 && v2 == 0 ) {
                count ++ ;
            } else {
                return -1 ;
            }
        }
        return count ;
    }
};
