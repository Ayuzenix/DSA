#include<bits/stdc++.h>
using namespace std ;

// Problem : Remove Digit From Number to Maximize Result 
// Platform : Leetcode 

class Solution {
public:
    string removeDigit(string number, char digit) {
          int n = number.size() ;
          int idx = -1 , last = -1 ;
          for ( int i = 0 ; i < n ; i ++ ) { 
               if ( ( i < n - 1 ) && ( number[i] == digit ) && ( number[i] < number[i+1] ) ) {
                   idx = i ; 
                   break ;
               } 
               if ( number[i] == digit ) {
                   last = i ;
               }
          }
          string result ="" ;
          if ( idx != -1 )  {
              for  ( int i = 0 ; i < n ; i ++ ) {
                   if ( i != idx ) {
                       result = result + number[i] ;
                   }
              }
          } else {
              for ( int i = 0 ; i < n ; i ++ ) {
                  if ( i != last ) { 
                      result = result + number[i] ;
                  }
              }
          }
          return result ;
    }
};
