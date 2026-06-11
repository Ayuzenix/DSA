#include<bits/stdc++.h>
using namespace std ;

// Problem : Count Monobit Integers 
// Platform : Leetcode 

class Solution {
public:
    int countMonobit(int n) {
        int count = 1 ;
        if ( n == 0 ) {
            return count ;
        }
        count = 2 ;
        int st = 1 ;
        while ( st <= n ) { 
             st = (  ( st<<1 ) | 1 ) ;
             if ( st<=n ) {
                count ++ ;
             }
        }
        return count ;
    }
};
