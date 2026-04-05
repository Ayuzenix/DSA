#include<bits/stdc++.h>
using namespace std ;

// Problem : Complement if Base 10 Integer 
// Platform : Leetcode 

class Solution {
public:
    int bitwiseComplement(int n) {
        if ( n == 0 ) {
            return 1 ;
        }
        int size = (int)log2( n ) + 1 ;
        for ( int i = 0 ; i < size ; i ++ ) {
             n = (( n ) ^ ( 1 << i )) ;
        }
        return n ; 
    }
};
