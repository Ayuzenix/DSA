#include<bits/stdc++.h>
using namespace std ;

// Problem : Partitioning Into Minimum Number Of Deci-Binary Numbers
// Platform : Leetcode 

class Solution {
public:
   
    int toCount( string s ) {
        int count = 0 ;
        for ( int i = 0 ; i < s.size() ; i ++ ) {
             if ( s[i] == '0' ) {
                 count ++ ;
             }
        }
        return count ;
    }

    int minPartitions(string s) {
        int n = s.size() , numRequired = 0 ;
        while ( toCount( s ) != s.size() ) {
             
             for ( int i = 0 ; i < s.size() ; i ++ ) {
                  if ( s[i] >= '1' ) {
                    s[i] = ( ( ( s[i] -'0') - ( '1' - '0' ) ) + '0' ) ;
                  } else {
                    s[i] = ( ( ( s[i] -'0') - ( '0' - '0' ) ) + '0' ) ;
                  }
             }
             numRequired ++ ;
        }
        return numRequired ;
    }
};
