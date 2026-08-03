#include<bits/stdc++.h>
using namespace std ;

// Problem : Array of Doubled Pairs 
// Platform : Leetcode 

class Solution {
public:
    bool canReorderDoubled(vector<int>& arr) {
         int n = arr.size() ,  zeros = 0 ;
         unordered_map<int,int>mp ;
         sort( arr.begin() , arr.end() ) ; // To find out the Pair consecutively and avoiding any Error 
         for ( int i = 0 ; i < n ; i ++ ) {
              if ( arr[i] != 0 ) {
              mp[arr[i]] ++ ;
              } else {
                zeros ++ ;
              }
         } 
         if ( ( zeros & 1 ) != 0 ) {
            return false ;
         }
         int count = ( zeros / 2 ) ;
         for ( int i = 0 ; i < n ; i ++ ) {
              if ( mp.find( arr[i] ) == mp.end() || arr[i] == 0 ) {
                  continue ;
              } else {
                int x = 2 * arr[i] ;
                if ( mp.find( x ) != mp.end() ) {
                     mp[x] -- ;
                     mp[arr[i]] -- ;
                     if ( mp[x] == 0 ) {
                        mp.erase( x ) ;
                     }
                     if ( mp[arr[i]] == 0 ) {
                        mp.erase( arr[i] ) ;
                     }
                     count ++ ;
                }
              }
         }
         return ( count == n / 2 ) ;
    }
};
