#include<bits/stdc++.h>
using namespace std ;

// Problem : Smallest Number With All Set Bits 
// Platform : Leetcode 

class Solution {
public:
    int smallestNumber(int n) {
        if ( n == 0 || n == 1 ) {
             return 1 ;
        }
        int curr = 1 ;
        while ( curr < n ) {
             curr = ( ( curr << 1) | 1 ) ;
             if ( curr >=n ) {
                return curr ;
             }
        }
        return curr ;
    }
};
