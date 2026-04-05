#include<bits/stdc++.h>
using namespace std ;

// Problem : Prime Number of Set Bits in Binary Representation
// Platform : Leetcode 

class Solution {
public:

    int count ( int x ) {
        int ones=0;
        while ( x > 0 ) {
            int rem = x % 2 ;
            if ( rem == 1 ) {
                ones ++ ;
            }
            x = x / 2 ;
        }
        return ones ;
    }
    bool isPrime( int y )  { 
        if ( y <=1 ) {
            return false ;
        }
        for ( int i = 2 ; i * i <=y ; i ++ ) {
            if ( y % i == 0) {
                return false ;
            }
        }
        return true ;
    }

    int countPrimeSetBits(int left, int right) {
        int curr = 0 ;
        for ( int i = left ; i <= right ; i ++ ) {
            if ( isPrime( count (i) ) == true ) {
                curr ++ ;
            }
        }
        return curr ;
    }
};
