#include<bits/stdc++.h>
using namespace std ;

// Problem : Single-Threaded CPU 
// Platform : Leetcode 

class Solution {
public:
    vector<int> getOrder(vector<vector<int>>& tasks) {
        vector<pair<long long,pair<long long,long long>>>store ;
        vector<int>result ; 
        for ( int i = 0 ; i < tasks.size() ; i ++ ) {
             store.push_back( { tasks[i][0] , { tasks[i][1] , i } } ) ;
        }
        sort( store.begin() , store.end() ) ;
        priority_queue<pair<long long,long long>,vector<pair<long long,long long>>,greater<pair<long long,long long>>>pq ; 
        long long time = 0 , r = 0 ;
        while ( r < tasks.size() ) {
            long long curr = store[r].first ;
            while ( !pq.empty() && time < curr ) {
                   result.push_back( pq.top().second ) ;
                   time = time + pq.top().first ; 
                   pq.pop() ;
            }
            time = max( time , curr ) ;
            while ( r < tasks.size() && time >= store[r].first ) {
                pq.push( { store[r].second.first , store[r].second.second } ) ;
                r ++ ; 
            } 
        }
        while ( !pq.empty() ) {
             result.push_back( pq.top().second ) ;
             pq.pop() ;
        }
        return result ; 
    }
};
