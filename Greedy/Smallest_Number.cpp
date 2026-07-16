#include<bits/stdc++.h>
using namespace std ;

// Problem : Smallest Number 
// Platform : GeeksforGeeks 

class Solution {
  public:
    string smallestNumber(int s, int d) {
        string str = "" ;
        int gama ;
        if ( s % d == 0 ) {
            gama = s / d ;
        } else {
            gama = ( s / d ) + 1 ;
        }
        if ( gama > 9 ) {
            return to_string( -1 ) ;
        }
        while ( d > 1 ) {
             for ( int i = 0 ; i <= 9 ; i ++ ) {
                  if ( str == "") {
                      if ( i == 0 ) {
                          continue ;
                      }
                  }
                  int rem = s - i , n ;
                  if ( rem <= 0 ) {
                      rem = 0 ;
                  }
                  if ( ( rem % ( d - 1 ) ) == 0 ) {
                      n = rem / ( d - 1 ) ;
                  } else {
                      n = ( rem / ( d - 1 ) ) + 1 ;
                  }
                  if ( n <= 9 ) {
                      str = str + to_string( i ) ;
                      s = rem ;
                      d = d - 1 ;
                      break ;
                  }
             }
        }
        str = str + to_string( s ) ;
        return str ;
    }
};
