#include<bits/stdc++.h>
using namespace std ;

// Problem : Most Profit Assigning Work 
// Platform : Leetcode 

class Solution {
public:
    int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit, vector<int>& worker) {
        int n = difficulty.size() ;
        vector<vector<int>>store ;
        for ( int i = 0 ; i < n ; i ++ ) {
            store.push_back( { difficulty[i] , profit[i] } ) ;
        }
        sort( store.begin() , store.end() ) ;
        int tillMax = INT_MIN ;
        for ( int i = 0 ; i < store.size() ; i ++ ) { // Kind of Prefix Sum type Structure 
            tillMax = max( tillMax , store[i][1] ) ;
            store[i][1] = tillMax ;
        }
        sort( worker.begin() , worker.end() ) ; 
        int l = worker.size() - 1 , r = store.size() - 1 , totalProfit = 0 ;
        while ( l >= 0 ) {
            while ( r >= 0 && store[r][0] > worker[l] ) {
                r -- ;
            }
            if ( r >= 0 ) {
                totalProfit = totalProfit + store[r][1] ;
            }
            l -- ;
        }
        return totalProfit ;
    }
};
