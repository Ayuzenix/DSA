#include<bits/stdc++.h>
using namespace std ;

// Problem : Maximum Binary String After Change 
// Platform : Leetcode 

class Solution {
public:
    string maximumBinaryString(string binary) {
         int n = binary.size() ;
         int r1 = n - 1 , r2 = n - 1 , zeros = 0 ;
         vector<int>store( n ) ;
         for ( int i = 0 ; i < n ; i ++ ) {
              if ( binary[i] == '0' ) {
                  zeros ++ ;
              }
              store[i] = zeros ;
         }
         while ( r1 > 0 ) { // This Part is for Grouping of Zeros 
               while ( r1 < r2 && binary[r2] != '0' ) {
                    r2 -- ;
               }
               if ( binary[r1] == '1' && binary[r2] == '0' && store[r1] > 0 ) {
                   swap( binary[r1] , binary[r2] ) ;
               }
               r1 -- ;
         }
         string result = "" ;
         for ( int i = 0 ; i < n ; i ++ ) { // This Part is for Filling the Leftmost bit where 0 occurs 
              if ( result == "" ) {
                  result = result + binary[i] ;
              } else {
                  if ( result.back() == '0' && binary[i] == '0' ) {
                      result.back() = '1' ;
                      result.push_back( '0' ) ;
                  } else {
                      result.push_back( binary[i] ) ;
                  }
              }
         }
         return result ;
    }
};
