#include<bits/stdc++.h>
using namespace std ;

// Problem : Job Sequencing Problem
// Platform : Leetcode 

class Solution {
  public:
    vector<int> jobSequencing(vector<int> &deadline, vector<int> &profit) {
        int maxi = *max_element( deadline.begin() , deadline.end() ) ; 
        vector<int>check( maxi + 1 , -1 ) ;
        vector<vector<int>>store ;
        for ( int i = 0 ; i < deadline.size() ; i ++ ) {
             store.push_back( { deadline[i] , profit[i] } ) ;
        }
        sort( store.begin() , store.end() , []( auto &a , auto &b ) {
            return a[1] > b[1] ;
        }) ;
        int totalProfit = 0 , totalTime = 0 ;
        for ( int i = 0 ; i < store.size() ; i ++ ) {
             int x = store[i][0] ;
             int j = x ;
             for ( j = x ; j>=1 ; j-- ) {
                 if ( check[j] == -1 ) {
                     check[j] = 0 ;
                     totalProfit = totalProfit + store[i][1] ;
                     totalTime ++ ;
                     break ;
                 }
             }
        }
        return { totalTime , totalProfit } ;
    }
};
