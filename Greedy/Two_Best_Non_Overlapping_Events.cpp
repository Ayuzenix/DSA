#include<bits/stdc++.h>
using namespace std ;

// Problem : Two Best Non-Overlapping Events 
// Platform : Leetcode 

class Solution {
public:
    int maxTwoEvents(vector<vector<int>>& events) {
        int n = events.size() ;
        sort( events.begin() , events.end() , []( auto &a , auto &b ) {
             if ( a[0] == b[0] ) {
                 return a[1] < b[1] ;
             }
             return a[0] < b[0] ;
        }) ;
        vector<int>at( n ) ;
        vector<int>nextMax( n ) ;
        int maxi = INT_MIN ; 
        for ( int i = n - 1 ; i >= 0 ; i -- ) {
             at[i] = events[i][0] ; // Events are organised in a ascending way by StartTime
             maxi = max( maxi , events[i][2] ) ;
             nextMax[i] = maxi ; 
        }
        int maxScore = *max_element( nextMax.begin() , nextMax.end() ) ;
        for ( int i = n - 1 ; i >= 0 ; i -- ) {
             int currEndTime = events[i][1] ;
             int idx = upper_bound( at.begin() , at.end() , currEndTime ) - at.begin() ; 
             if ( idx < n ) {
                 maxScore = max( maxScore , ( events[i][2] + nextMax[idx] ) ) ;
             }
        }
        return maxScore ; 
    }
};

