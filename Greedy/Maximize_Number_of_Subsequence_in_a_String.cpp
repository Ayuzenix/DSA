#include<bits/stdc++.h>
using namespace std ;

// Problem : Maximize Number of Subsequence in a String 
// Platform : Leetcode 

class Solution {
public:
    long long maximumSubsequenceCount(string text, string pattern) {
         long long n = text.size() ;
         string str = "" ;
         for ( int i = 0 ; i < n ; i ++ ) {
              if ( text[i] == pattern[0] || text[i] == pattern[1] ) {
                //   str = str + text[i] ;
                str.push_back( text[i] ) ;
              }
         }
         long long m = str.size() , count = 0 , sum = 0 , countfirst = 0 ;
         if ( m == 1 ) {
             return 1 ;
         }
         if ( pattern[0] == pattern[1] ) {
              long long sum = 0 ;
              for ( int i = 0 ; i < m ; i ++ ) {
                   sum = sum + i ;
              }
              return ( sum + ( m ) ) ;
         }
         for ( int i = m - 1 ; i >= 0 ; i -- ) {
              if ( str[i] == pattern[1] ) {
                  count ++ ;
              }
              if ( str[i] == pattern[0] ) {
                  sum = sum + count ;
                  countfirst ++ ;
              }
         }
         long long c1 = sum + ( count ) , c2 = sum + ( countfirst ) ;
         return max( c1 , c2 ) ;
    }
};
