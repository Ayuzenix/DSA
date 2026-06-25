#include<bits/stdc++.h>
using namespace std ;

// Problem : Lexicographically Smallest String After a Swap 
// Platform : Leetcode 

class Solution {
public:
    string getSmallestString(string s) {
        int n = s.size() ;
        for ( int i = 0 ; i < n - 1 ; i ++ ) {
             int x = s[i] , y = s[i+1] ;
             if ( x > y ) {
                if ( ( ( ( x & 1 ) == 0  ) && ( ( y & 1 ) == 0 ) )
                    || ( ( ( x & 1 ) !=0 ) && ( ( y & 1 ) != 0 ) ) ) {
                        swap( s[i] , s[i+1] ) ;
                        break ; // At Most once swapping is allowed 
                    } 
             }
        }
        return s ;
    }
};
