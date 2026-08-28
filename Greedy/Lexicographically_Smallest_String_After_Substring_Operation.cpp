#include<bits/stdc++.h>
using namespace std ;

// Problem : Lexicographically Smallest String After Substring Operation 
// Platform : Leetcode 

class Solution {
public:
    string smallestString(string s) {
          int n = s.size() ;
          int l = 0 , r = 0 ;
          while ( l < n && r < n ) {
              while ( l < n && s[l] == 'a' ) { 
                    l ++ ;
              }
              r = l ;
              while ( r < n && s[r] != 'a' ) {
                  r ++ ;
              }
              break ;
          }
          if ( l < n ) { 
          for ( int i = l ; i < r ; i ++ ) {
               int x = ( s[i] - 'a' ) ;
               x -- ;
               s[i] = ( x + 'a' ) ;
          }
          } else {
               s[n-1] = 'z' ;
          }
          return s ;
    } 
};

