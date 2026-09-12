#include<bits/stdc++.h>
using namespace std ;

// Problem : Distant Barcodes ( Greedy Based Approach ) 
// Platform : Leetcode 

class Solution {
public:
    vector<int> rearrangeBarcodes(vector<int>& barcodes) {
         int n = barcodes.size() ;
         unordered_map<int,int>mp ;
         for ( int i = 0 ; i < n ; i ++ ) {
              mp[barcodes[i]] ++ ;
         }
         priority_queue<pair<int,int>>pq ; // Max Heap 
         for ( auto &it:mp ) {
              pq.push( { it.second , it.first } ) ; // First Frequency , Second Element  
         }
         vector<int>store( n ) ;
         int l = 0 , r = 1 , remFreq = 0 , remElement = -1 ;
         while ( l < n || r < n ) {
                int freq , Element ; 
                if ( remFreq == 0  ) {
                    freq = pq.top().first , Element = pq.top().second ;
                    pq.pop() ;
                } else {
                    freq = remFreq , Element = remElement ;
                }
                if ( l < n ) {
                    while ( l < n && freq > 0 ) {
                        store[l] = Element ;
                        freq -- ;
                        l = l + 2 ;
                    }
                    if ( freq > 0 ) {
                        remFreq = freq , remElement = Element ;
                    } else {
                        remFreq = 0 ; 
                    }
                } else {
                    while ( r < n && freq > 0 ) {
                         store[r] = Element ; 
                         freq -- ;
                         r = r + 2 ;
                    }
                    if ( freq > 0 ) {
                        remFreq = freq , remElement = Element ;
                    } else {
                        remFreq = 0 ;
                    }
                }
         }
         return store ;
    }
};
