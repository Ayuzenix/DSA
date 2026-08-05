#include<bits/stdc++.h>
using namespace std ;

// Problem : Two City Scheduling 
// Platform : Leetcode 

class Solution {
public:
    int twoCitySchedCost(vector<vector<int>>& costs) {
        int n = costs.size() ;
        vector<vector<int>>store ;
        for ( int i = 0 ; i < n ; i ++ ) {
             store.push_back( { abs( costs[i][0] - costs[i][1] ) , i } ) ;
        }
        sort( store.rbegin() , store.rend() ) ;
        int acount = 0 , bcount = 0 , curr = 0 ; 
        for ( int i  = 0 ; i < store.size() ; i ++ ) {
            int idx = store[i][1] ;
            if ( costs[idx][0] <= costs[idx][1] ) {
                if ( acount < ( n / 2 ) ) {
                    curr = curr + costs[idx][0] ; 
                    acount ++ ; 
                } else {
                    curr = curr + costs[idx][1] ;
                    bcount ++ ;
                }
            } else {
               if ( bcount < ( n / 2 ) ) {
                    curr = curr + costs[idx][1] ; 
                    bcount ++ ; 
                } else {
                    curr = curr + costs[idx][0] ;
                    acount ++ ;
                }
            }
        }
        return curr ;
    } 
};
