#include<bits/stdc++.h>
using namespace std ;

// Problem : Most Popular Video Creator 
// Platform : Leetcode 

class Solution {
public:
    vector<vector<string>> mostPopularCreator(vector<string>& creators, vector<string>& ids, vector<int>& views) {
        long long n = creators.size() ;
        unordered_map<string,long long>mp ;
        for ( long long i = 0 ; i < n ; i ++ ) {
             if ( mp.find( creators[i] ) == mp.end() ) {
                 mp[creators[i]] = views[i] ;
             } else {
                long long curr = ( mp[creators[i]] + views[i] ) ;
                mp[creators[i]] = curr ; 
             }
        }
        priority_queue<pair<long long,string>>pq ; 
        for ( auto &it:mp ) {
             pq.push( { it.second , it.first } ) ;
        }
        unordered_map<string,long long>toStore ; // will only holds those values whose contributed to maximum popularity
        long long top = pq.top().first ; 
        while ( !pq.empty() && pq.top().first == top ) {
               string curr = pq.top().second ;
               toStore[curr] ++ ;
               pq.pop() ;
        }
        unordered_map<string,priority_queue<pair<long long,string>,vector<pair<long long,string>>,greater<pair<long long,string>>>>minPq ; 
        for ( long long i = 0 ; i < n ; i ++ ) {
             if ( toStore.find( creators[i] ) != toStore.end() ) {
                //  minPq[creators[i]].push( { - views[i] , ids[i] } ) ; 
                long long curr = ( - views[i] ) ;
                string str = ids[i] ; 
                minPq[creators[i]].push( { curr , str } ) ; 
             }
        }
        vector<vector<string>>result ; 
        for ( auto &it:minPq ) {
             string left = it.first ;
             string right = it.second.top().second ; 
             result.push_back( { left , right } ) ; 
        }
        return result ; 
    }
};
