#include<bits/stdc++.h>
using namespace std ;

// Problem : The Number of the Smallest Unoccupied Chair 
// Platform : Leetcode 

class Solution {
public:
    int smallestChair(vector<vector<int>>& times, int targetFriend) {
        int n = times.size() ;
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq ; 
        for ( int i = 0 ; i < n ; i ++ ) {
             pq.push( { times[i][0] , i } ) ;
        }
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>ocpq ; // time chair 
        priority_queue<int,vector<int>,greater<int>>avlpq ; 
        for ( int i = 0 ; i <= 10000 ; i ++ ) {
             avlpq.push( i ) ;
        }
        int time = 0 , ans = -1 ;
        while ( !pq.empty() ) {
            int idx = pq.top().second ; 
            time = max( time , times[idx][0] ) ;
            while ( !ocpq.empty() && ocpq.top().first <= time ) {
                   int ch = ocpq.top().second ; 
                   ocpq.pop() ;
                   avlpq.push( ch ) ;
            }
            int avlChair = avlpq.top() ;
            avlpq.pop() ;
            if ( targetFriend == idx ) {
                ans = avlChair ;
            }
            ocpq.push( { times[idx][1] , avlChair } ) ;
            pq.pop() ;
        }
        return ans ; 
    }
};
