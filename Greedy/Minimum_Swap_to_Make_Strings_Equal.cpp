#include<bits/stdc++.h>
using namespace std ;

// Problem : Minimum Swaps to Make Strings Equal 
// Platform : Leetcode 

class Solution {
public:
    int minimumSwap(string s1, string s2) {
        int n = s1.size() , xy = 0 , yx = 0 ;
        for ( int i = 0 ; i < n ; i ++ ) {
            if ( s1[i] == s2[i] ) {
                continue ;
            }
            if ( s1[i] =='x' && s2[i] =='y' ) {
                xy ++ ;
            } else {
                yx ++ ;
            }
        }
        if ( ( xy % 2 == 0 ) && ( yx % 2 == 0 ) ) {
            return ( ( xy / 2 ) + ( yx / 2 ) ) ;
        }
        if ( ( xy & 1 !=0 ) && ( yx & 1 != 0 ) ) {
            return ( ( xy / 2 ) + 1 + ( yx / 2 ) + 1 ) ;
        }
        return -1 ;
    }
};
