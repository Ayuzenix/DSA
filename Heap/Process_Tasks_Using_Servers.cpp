#include<bits/stdc++.h>
using namespace std ;

// Problem : Process Tasks Using Servers 
// Platform : Leetcode 

class Solution {
public:
    vector<int> assignTasks(vector<int>& servers, vector<int>& tasks) {
        int n = servers.size() ;  
        vector<int>result( tasks.size() ) ;
        priority_queue<pair<long long,long long>,vector<pair<long long,long long>>,greater<pair<long long,long long>>>pq ;
        for ( int i = 0 ; i < n ; i ++ ) {
             pq.push( { servers[i] , i } ) ;
        }
        priority_queue<pair<long long,pair<long long,long long>>,vector<pair<long long,pair<long long,long long>>>,greater<pair<long long,pair<long long,long long>>>>uapq ; 
        // time , value , index 
        long long time = 0 , idx = 0 , m = tasks.size() ;
        while ( idx < m ) {
             if ( idx > time ) {
                 time = idx ; 
             } 
             if ( pq.empty() ) {
                //  time = max( time , uapq.top().first ) ;
                 if ( uapq.top().first > time ) {
                     time = uapq.top().first ;
                 }
             }
             while ( !uapq.empty() && uapq.top().first <= time ) {
                pq.push( { uapq.top().second.first , uapq.top().second.second } ) ;
                uapq.pop() ;
                }
             int i = pq.top().second , value = pq.top().first ; 
             result[idx] = i ;
             pq.pop() ;
             uapq.push( { time + tasks[idx] , { value , i } } ) ;
             idx ++ ;
        }
        return result ;
    }
};
