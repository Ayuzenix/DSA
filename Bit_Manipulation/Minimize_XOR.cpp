#include<bits/stdc++.h>
using namespace std ;

// Problem : Minimize XOR 
// Platform : Leetcode 

class Solution {
public:
    int minimizeXor(int num1, int num2) {
        int sb1 = 0 , sb2 = 0 ;
        for ( int i = 0 ; i < 32 ; i ++ ) { 
             int m = ( num1 & ( 1 << i ) ) ;
             int n = ( num2 & ( 1 << i ) ) ;
             if ( m != 0 ) sb1 ++ ;
             if ( n != 0 ) sb2 ++ ;
        }
        if ( sb1 == sb2 ) {
            return num1 ;
        }
        if ( sb1 > sb2 ) { 
            int curr = num1 ;
            for ( int i = 0 ; i < 32 ; i ++ ) {
                 int m = ( curr & ( 1 << i ) ) ;
                 if ( m != 0 ) { 
                     curr = ( curr ^ ( 1 << i ) ) ;
                     sb1 -- ;
                 }
                 
                 if( sb1 == sb2 ) {
                    break ;
                 }
            }
            return curr ;
        }
        if ( sb2 > sb1 ) { 
           int curr = num1 ;
           for ( int i = 0 ; i < 32 ; i ++ ) {
            int m = ( curr & ( 1 << i ) ) ;
            if ( m == 0 ) {
                curr = ( curr | ( 1 << i ) ) ;
                sb1 ++ ;
            }
            if ( sb1 == sb2 ) {
                break ;
            }
           }
           return curr ;
        }
        return -1 ;
    }
};
