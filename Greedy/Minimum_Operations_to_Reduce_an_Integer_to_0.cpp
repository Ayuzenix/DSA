#include<bits/stdc++.h>
using namespace std ;

// Problem : Minimum Operations to Reduce an Integer to 0 
// Platform : Leetcode 

class Solution {
public:
    int minOperations(int n) {
        string str = "" ;
        while ( n > 0 ) {
              int curr = ( n & 1 ) ;
              str.push_back( ( curr + '0' ) ) ;
              n = n >> 1 ;
        }
        int m = str.size() ;
        int totalOperations = 0 , l = 0 , r = 0 ;
        while ( r < m ) {
             while ( l < m && str[l] != '1' ) {
                 l ++ ;
             }
             r = l ;
             while ( r < m && str[r] == '1' ) {
                 r ++ ;
             }
             if ( r < m && ( r - l + 1 ) > 2 ) {
                 totalOperations ++ ;
                 str[r] = '1' ;
                 l = r ;
             } else if ( r < m && ( r - l + 1 ) <= 2 ) {
                 totalOperations ++ ; 
                 l = r ;
             }
        }
        if ( l < m && str[l] == '1' ) {
            if ( ( r - l + 1 ) <= 2 ) {
                totalOperations ++ ;
            } else {
                totalOperations = totalOperations + 2 ;
            }
        }
        return totalOperations ;
    }
};
