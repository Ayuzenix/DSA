#include<bits/stdc++.h>
using namespace std ;

// Problem : Maximum Total Importance of Roads 
// Platform : Leetcode 

 class Solution {
public:
    long long maximumImportance(int n, vector<vector<int>>& roads) {
        unordered_map<int,int>mp ;
        for ( int i = 0 ; i < roads.size() ; i ++ ) {
             mp[roads[i][0]] ++ ;
             mp[roads[i][1]] ++ ;
        }
        vector<int>store ;
        for ( auto &it:mp ) {
             store.push_back( it.second ) ;
        }
        sort( store.rbegin() , store.rend() ) ;
        long long curr = 0 , m = n ;
        for ( int i = 0 ; i < store.size() ; i ++ ) {
             curr = curr + ( ( store[i] * ( m ) ) ) ;
             m -- ;
        }
        return curr ;
    }
};
