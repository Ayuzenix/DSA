#include<bits/stdc++.h>
using namespace std ;

// Problem : Largest Values From Labels 
// Platform : Leetcode 

class Solution {
public:
    int largestValsFromLabels(vector<int>& values, vector<int>& labels, int numWanted, int useLimit) {
        int n = values.size() ;
        vector<vector<int>>store ;
        for ( int i = 0 ; i < n ; i ++ ) {
             store.push_back( { values[i] , labels[i] } ) ;
        }
        sort( store.begin() , store.end() ) ;
        unordered_map<int,int>mp ;
        int curr = 0 , count = 0 ;
        for ( int i = store.size() - 1 ; i >= 0 ; i -- ) {
             if ( count == numWanted ) {
                 break ;
             }
             if ( mp[store[i][1]] < useLimit ) {
                 curr = curr + store[i][0] ;
                 mp[store[i][1]] ++ ;
                 count ++ ;
             } else {
                continue ;
             }
        }
        return curr ;
    }
};
