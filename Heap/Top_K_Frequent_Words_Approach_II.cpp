#include<bits/stdc++.h>
using namespace std ;

// Problem : Top K Frequent Words ( Approach II )
// Platform : Leetcode 

class Solution {
public: // Approach II 
    vector<string> topKFrequent(vector<string>& words, int k) {
        int n = words.size() ;
        unordered_map<string,int>mp ;
        for ( int i = 0 ; i < n ; i ++ ) {
             mp[words[i]] ++ ;
        }
        priority_queue<pair<int,string>>pq ;
        for ( auto &it:mp ) {
             pq.push( { it.second , it.first } ) ;
        }
        vector<string>store ;
        while ( !pq.empty() ) {
             store.push_back( pq.top().second ) ;
             pq.pop() ;
        }
        int l = 0 , r = 0 ;
        while ( r < store.size() ) {
             int freq = mp[store[l]] ;
             while ( r < store.size() && mp[store[r]] == freq ) {
                    r ++ ;
             }
             sort( store.begin() + l , store.begin() + r ) ;
             l = r ;
        }
        vector<string>finalResult ;
        for ( int i = 0 ; i < k ; i ++ ) {
             finalResult.push_back( store[i] ) ;
        }
        return finalResult ;
    }
};
