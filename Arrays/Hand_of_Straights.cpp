#include<bits/stdc++.h>
using namespace std ;

// Problem : Hand of Straights 
// Platform : Leetcode 

class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
         int n = hand.size() ;
         unordered_map<int,int>mp ;
         for ( int i = 0 ; i < n ; i ++ ) {
              mp[hand[i]] ++ ;
         }
         int idx = 0 ;
         sort( hand.begin() , hand.end() ) ;
         while ( idx < n ) {
              while ( idx < n && mp.find( hand[idx] ) == mp.end() ) {
                  idx ++ ;
              }
              if ( idx >= n ) break ;
              int curr = 0 , element = hand[idx] ;
              while ( idx < n && curr != groupSize ) {
                   if ( mp.find( element ) == mp.end() ) {
                       return false ;
                   }
                   mp[element] -- ;
                   if ( mp[element] == 0 ) {
                       mp.erase( element ) ;
                   }
                   element ++ ;
                   curr ++ ;
              }
              if ( curr != groupSize ) {
                  return false ;
              }
         }
         return true ;
    }
};
