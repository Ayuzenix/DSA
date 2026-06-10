#include<bits/stdc++.h>
using namespace std ;

// Problem : Split a String in Balanced Strings
// Platform : Leetcode 

class Solution {
public:
    int balancedStringSplit(string s) {
        int n = s.size() , rc = 0 , lc = 0 , l = 0 , r = 0 , total = 0 ;
        while ( r < n ) {
               if ( s[r] == 'R' ) {
                   rc ++ ;
               }else if ( s[r] == 'L' ) {
                   lc ++ ;
               }
               if ( lc == rc ) {
                   total ++ ;
                   l = r + 1 ;
               }
               r ++ ;
        }
        return total ;
    }
};
