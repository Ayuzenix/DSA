#include<bits/stdc++.h>
using namespace std ;

// Problem : Relative Ranks 
// Platform : Leetcode 

class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        int n = score.size() ;
        unordered_map<int,int>mp ;
        for ( int i = 0 ; i < n ; i ++ ) {
             mp[score[i]] = i ;
        }
        sort( score.rbegin() , score.rend() ) ;
        int count = 0 ;
        vector<pair<string,int>>store ; 
        for ( int i = 0 ; i < n ; i ++ ) {
            if ( i == 0 ) {
                store.push_back( { "Gold Medal" , score[i]} ) ;
            }else if ( i == 1 )  {
                store.push_back( { "Silver Medal" , score[i]} ) ;
            }else if ( i == 2 ) {
                store.push_back({ "Bronze Medal" , score[i] } ) ;
            }else {
                store.push_back( { to_string( i + 1 ) , score[i]} ) ;
            }
        }
        vector<string>result( n ) ;
        for ( auto & it: store ) {
              int x = it.second ;
              result[mp[x]] = it.first ;
        }
        return result ;
    }
};
