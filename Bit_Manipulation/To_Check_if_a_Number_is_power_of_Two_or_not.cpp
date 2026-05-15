#include<bits/stdc++.h>
using namespace std ;

// Problem : To Check if a Number is Power of Two or Not 
// Platform : Leetcode 

// Approach --> 1st 
class Solution {
public:
    bool isPowerOfTwo( long long n) {
         long long count = 0 ;
         long long m = log2( n ) + 1 ;
         for ( long long i = 0 ; i < m ; i ++ ) {
            long long x = ( ( 1 << i ) & ( n ) ) ;
            if ( x > 0  ) {
                count ++ ;
            }
         }
         if ( count == 1 ) {
            return true ;
         }
         return false ;
    }
};

// Approach --> 2nd 

class Solution {
public:
    bool isPowerOfTwo(long long n) {
         if ( n == 0 ) {
            return false ;
         }
         if ( ( ( n ) & ( n - 1 ) ) == 0 )  {
             return true ;
         } 
         return false ;
    }
};
