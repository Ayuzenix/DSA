#include<bits/stdc++.h>
using namespace std ;

// Problem : Integer Replacement 
// Platform : Leetcode 

class Solution {
public:
    int integerReplacement(int n) {
        long long  count = 0 ;
        long long m = n ;
        while ( m > 1 ) {
             if ( m % 2 == 0 ) {
                 m = m / 2 ;
                 count ++ ;
             } else {
                if ( ( ( m - 1 ) / 2 ) % 2 == 0 || ( ( m - 1 ) / 2 ) == 1 ) {
                    m = m - 1 ;
                    count ++ ;
                } else if ( ( ( m + 1 ) / 2 ) % 2 == 0 ) {
                    m = m + 1 ;
                    count ++ ;
                } else {
                    m = m - 1 ;
                    count ++ ;
                }
             }
        }
        return count ;
    }
};
