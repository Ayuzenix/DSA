#include<bits/stdc++.h>
using namespace std ;

// Problem : Remove Colored Pieces if Both Neighbors are the Same Color 
// Platform : Leetcode 

class Solution {
public:
    bool winnerOfGame(string colors) {
         int n = colors.size() , aliceTurns = 0 , bobTurns = 0 ;
         if ( n <= 2 ) { // Alice Lost 
             return false ;
         }
         int idx = 0 ;
         while ( idx < n ) {
              if ( colors[idx] == 'A' ) {
                  int count = 0 ;
                  while ( idx < n && colors[idx] == 'A' ) {
                      idx ++ ;
                      count ++ ;
                  }
                  if ( count >= 3 ) {
                      aliceTurns = aliceTurns + ( count - 2 ) ;
                  }
              } else {
                 int count = 0 ;
                 while ( idx < n && colors[idx] == 'B' ) {
                     idx ++ ;
                     count ++ ;
                 }
                 if ( count >= 3 ) {
                     bobTurns = bobTurns + ( count - 2 ) ; 
                 }
              }
         }
         if ( aliceTurns <= bobTurns ) {
              return false ;
         }
         return true ;
    }
};
