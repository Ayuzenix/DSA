#include<bits/stdc++.h>
using namespace std ;

// Problem : Divide Intervals Into Minimum Number of Groups 
// Platform : Leetcode 

class Solution {
public:
    int minGroups(vector<vector<int>>& intervals) {
        int n = intervals.size() ;
        sort( intervals.begin() , intervals.end() , []( auto &a , auto &b ) {
             if ( a[0] == b[0] ) {
                 return a[1] < b[1] ; 
             }
             return a[0] < b[0] ;
        } ) ;
        // priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq ; 
        priority_queue<int,vector<int>,greater<int>>pq ; 
        for ( int i = 0 ; i < intervals.size() ; i ++ ) {
             if ( pq.empty() ) {
                 pq.push( intervals[i][1] ) ;
             } else {
                int topLast = pq.top() ;
                if ( intervals[i][0] > topLast ) {
                    pq.pop() ;
                    pq.push( intervals[i][1] ) ;
                } else {  
                    pq.push( intervals[i][1] ) ;
                }
             }
        } 
        return ( pq.size() ) ;
    }
};
