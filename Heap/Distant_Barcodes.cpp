#include<bits/stdc++.h>
using namespace std ;

// Problem : Distant Barcodes ( Heap Approach )  
// Platform : Leetcode 

class Solution {
public: 
    vector<int> rearrangeBarcodes(vector<int>& barcodes) {
        int n = barcodes.size() ;
        unordered_map<int,int>mp ;
        for ( int i = 0 ; i < n ; i ++ ) {
             mp[barcodes[i]] ++ ;
        }
        priority_queue<pair<int,int>>pq ; // First -->> Frequency , Second -->> Element 
        for ( auto &it:mp ) {
             pq.push( { it.second , it.first } ) ;
        }
        vector<int>store ;
        while ( pq.size() >= 2 ) {
               int freq1 = pq.top().first , Element1 = pq.top().second ;
               pq.pop() ;
               int freq2 = pq.top().first , Element2 = pq.top().second ;
               pq.pop() ;
               store.push_back( Element1 ) ;
               store.push_back( Element2 ) ;
               freq1 -- , freq2 -- ;
               if ( freq1 > 0 ) {
                pq.push( { freq1 , Element1 } ) ;
               }
               if ( freq2 > 0 ) {
                pq.push( { freq2 , Element2 } ) ;
               }
        }
        if ( !pq.empty() ) {
             store.push_back( pq.top().second ) ;
             pq.pop() ;
        }
        return store ;
    }
};
