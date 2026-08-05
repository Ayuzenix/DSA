#include<bits/stdc++.h>
using namespace std ;

// Problem : Group the People Given the Group Size They Belong To
// Platform : Leetcode 

class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        int n = groupSizes.size() ;
        vector<vector<int>>store ;
        for ( int i = 0 ; i < n ; i ++ ) {
             store.push_back( { i , groupSizes[i] } ) ;
        }
        sort( store.begin() , store.end() , []( auto &a , auto &b ) {
             if ( a[1] == b[1] ) {
                 a[0] < b[0] ;
             }
             return a[1] < b[1] ;
        } ) ;
        int l = 0 , r = 0 ;
        vector<vector<int>>result ;
        while ( r < n ) {
            vector<int>curr ;
            while ( r < n && ( r - l + 1 ) != store[l][1] ) {
            curr.push_back( store[r][0] ) ;
            r ++ ;
            }
            curr.push_back( store[r][0] ) ;
            result.push_back( curr ) ;
            r ++ , l = r ;
        }
        return result ;
    }
};
