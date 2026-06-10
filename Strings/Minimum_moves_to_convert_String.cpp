#include<bits/stdc++.h>
using namespace std ;

// Problem : Minimum Moves to Convert String
// Platform : Leetcode 

class Solution {
public:
    int minimumMoves(string s) {
        int n = s.size() , curr = 0 , count = 0 , l = 0 , r = 0 ;
        while ( r < n ) {
              while ( s[l] =='O') {
                l ++ ;
                r ++ ;
              }
              if ( s[r] =='X') {
                curr ++ ;
              }
              if ( ( r - l + 1 ) == 3 ) {
                  if ( curr > 0 ) {
                    count ++ ;
                    curr = 0 ;
                  }
                  l = r + 1 ;
              }
              r ++ ;
        }
        if ( curr > 0 ) {
            count ++ ;
        }
        return count ; 
    }
};
