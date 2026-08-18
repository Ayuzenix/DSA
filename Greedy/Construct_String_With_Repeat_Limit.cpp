#include<bits/stdc++.h>
using namespace std ;

// Problem : Construct String With Repeat Limit 
// Platform : Leetcode 

class Solution {
public:
    string repeatLimitedString(string s, int repeatLimit) {
          int n = s.size() ;
          unordered_map<char,int>mp ;
          priority_queue<char>pq ;
          for ( int i = 0 ; i < n ; i ++ ) {
               if ( mp.find( s[i] ) == mp.end() ) {
                   pq.push( s[i] ) ;
               }
               mp[s[i]] ++ ;
          }
          string str = "" ;
          while ( !pq.empty() ) {
               char c = pq.top() ;
               int mini = min( repeatLimit , mp[c] ) ;
               str = str.append( mini , c ) ;
               mp[c] = mp[c] - mini ;
               if ( mp[c] > 0 && !pq.empty() ) {
                   pq.pop() ;
                   if ( pq.empty() ) {
                       return str ;
                   }
                   str.push_back( pq.top() ) ;
                   mp[pq.top()] -- ;
                   if ( mp[pq.top()] == 0 ) {
                       mp.erase( pq.top() ) ;
                       pq.pop() ;
                   }
                   pq.push( c ) ;
               }
                if ( mp[c] == 0 && !pq.empty() ) { 
                   pq.pop() ;
                   mp.erase( c ) ;
               }
          }
          return str ;
    }
};
