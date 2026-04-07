#include<bits/stdc++.h>
using namespace std ;

// Problem : Minimum flip to make a OR b equal to c 
// Platform : Leetcode 

class Solution {
public:
    int minFlips(int a, int b, int c) {
        int count = 0 ;
        int maxi1 = max ( a , b ) ;
        int maxi = max ( maxi1 , c ) ;
        int n = log2( maxi ) + 1 ;
        for ( int i = 0 ; i < n ; i ++ ) {
             int x = ( a & ( 1 << i ) ) ;
             int y = ( b & ( 1 << i ) ) ;
             int z = ( c & ( 1 << i ) ) ;
                if ( z == 0 ) {
                     if ( ( x == 0 && y != 0 ) || ( x != 0 && y == 0 ) ) {
                        count = count + 1 ;
                     } else if ( ( x != 0 && y != 0 ) ) {
                        count = count + 2 ;
                     }
                } else if ( z != 0 ) {
                     if ( ( x == 0 && y == 0 ) ) {
                        count = count + 1 ;
                     } 
                }
        }
        return count ; 
    }
};

// Second Approach --> Eleminating that extra variables taken 
 
class Solution {
public:
    int minFlips(int a, int b, int c) {
        int count = 0 ;
        for ( int i = 0 ; i < 32 ; i ++ ) {
             int x = ( a & ( 1 << i ) ) ;
             int y = ( b & ( 1 << i ) ) ;
             int z = ( c & ( 1 << i ) ) ;
                if ( z == 0 ) {
                     if ( ( x == 0 && y != 0 ) || ( x != 0 && y == 0 ) ) {
                        count = count + 1 ;
                     } else if ( ( x != 0 && y != 0 ) ) {
                        count = count + 2 ;
                     }
                } else if ( z != 0 ) {
                     if ( ( x == 0 && y == 0 ) ) {
                        count = count + 1 ;
                     } 
                }
        }
        return count ; 
    }
};
