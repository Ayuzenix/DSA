#include<bits/stdc++.h>
using namespace std ;

// Problem : Minimum Cost to Make All Characters Equal 
// Platform : Leetcode 

class Solution {
public:

    long long solve( string s , char a ) {
         int n = s.size() , m = ( n / 2 ) ;
         long long curr = 0 , count = 0 ;
         for ( int i = m - 1 ; i >= 0 ; i -- ) {
            if ( ( s[i] == a && ( count & 1 ) != 0 ) || 
                    ( s[i] != a && ( count & 1 ) == 0  ) ) {
                     curr = curr + ( i + 1 ) ;
                     count ++ ;
                }
         }
         count = 0 ;
         for ( int i = m ; i < n ; i ++ ) {
             if ( ( s[i] == a && ( count & 1 ) != 0 ) || 
                    ( s[i] != a && ( count & 1 ) == 0  ) ) {
                    curr = curr + ( n - i ) ;
                    count ++ ;
                }
         }
         return curr ;
    }

    long long minimumCost(string s) {
        int n = s.size() ;
        long long c1 = solve( s , '0' ) ;
        long long c2 = solve( s , '1' ) ;
        return min( c1 , c2 ) ;
    }
};
