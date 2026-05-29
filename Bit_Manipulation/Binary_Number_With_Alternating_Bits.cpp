#include<bits/stdc++.h>
using namespace std ;

// Problem : Binary Number with alternating Bits 
// Platform : Leetcode 

//--> Optimal Solution 
class Solution {
public:
    bool hasAlternatingBits(int n) {
         int prev = ( n & 1 ) ;
         n = ( n >> 1 ) ;
         while ( n > 0 ) {
            int curr = ( n & 1 ) ;
            if ( prev == curr ) {
                return false ;
            }
            prev = curr ;
            n = ( n >> 1 ) ;
         }
         return true ;
    }
};
