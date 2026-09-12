#include<bits/stdc++.h>
using namespace std ;

// Problem : Reorganize String 
// Platform : Leetcode 

class Solution {
public:
    string reorganizeString(string s) {
        int n = s.size() ;
        unordered_map<char,int>mp ;
        priority_queue<pair<int,int>>pq ; // Max Heap 
        for ( int i = 0 ; i < n ; i ++ ) {
             mp[s[i]] ++ ;
        }
        for ( auto &it:mp ) {
             pq.push( { it.second , it.first } ) ; // First Freq , Second Char 
        }
        if ( pq.top().first > ( ( n + 1 ) / 2 ) ) {
            return "" ;
        }
        vector<char>store( n ) ;
        int l = 0 , r = 1 , remFreq = 0 , remChar = 0 ;
        while ( l < n || r < n ) {
              int freq , Char ;
              if ( remFreq == 0 ) {
                  freq = pq.top().first , Char = pq.top().second ;
                  pq.pop() ;
              } else {
                  freq = remFreq , Char = remChar ;
              }
              if ( l < n ) {
                  while ( l < n && freq > 0 ) {
                      store[l] = Char ;
                      freq -- ;
                      l = l + 2 ;
                  }
                  if ( freq > 0 ) {
                      remFreq = freq , remChar = Char ;
                  } else {
                     remFreq = 0 ;
                  }
              } else {
                 while ( r < n && freq > 0 ) {
                      store[r] = Char ;
                      freq -- ;
                      r = r + 2 ;
                 }
                 if ( freq > 0 ) {
                     remFreq = freq , remChar = Char ;
                 } else {
                     remFreq = 0 ;
                 }
              }
        }
        string str = "" ;
        for ( int i = 0 ; i < n ; i ++ ) {
             str = str + store[i] ;
        }
        return str ;
    }
};
