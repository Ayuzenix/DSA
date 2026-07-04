#include<bits/stdc++.h>
using namespace std ;

// Problem : Append Characters to String to Make Subsequence 
// Platform : Leetcode 

class Solution {
public:
    int appendCharacters(string s, string t) {
        int n = s.size() , m = t.size() ;
        int l1 = 0 , l2 = 0 ;
        while ( l1 < n && l2 < m ) {
             char x = t[l2] ;
             while ( l1 < n && s[l1] != x ) {
                l1 ++ ;
             }
             if ( l1 == n ) {
                break ;
             } else {
                l1 ++ ;
                l2 ++ ;
             }
        }
        return ( m - l2 ) ;
    }
};
