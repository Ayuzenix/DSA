#include<bit/stdc++.h>
using namespace std ;

// Problem : Count Substring Starting and ending with given Character 
// Platform : Leetcode 

class Solution {
public:
    long long countSubstrings(string s, char c) {
          long long n = s.size() ;
          long long count  = 0 ; 
          for ( int i = 0 ; i < n ; i ++ ) {
              if ( s[i] == c ) {
                  count ++ ;
              }
          }
          long long result = 0 ;
          while ( count > 0 ) {
             result = (long long)result + (long long)count ; 
             count -- ;
          }
          return result ;
    }
};
