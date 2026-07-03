#include<bits/stdc++.h>
using namespace std ;

// Problem : Minimum Domino Rotations For Equal Row 
// Platform : Leetcode 

class Solution {
public:
    int minDominoRotations(vector<int>& tops, vector<int>& bottoms) {
        set<vector<int>>st ;
        for ( int i = 0 ; i < tops.size() ; i ++ ) {
            st.insert( { tops[i] , i } ) ;
            st.insert( { bottoms[i] , i } ) ;
        }
        vector<vector<int>>store ;
        for ( auto &it:st ) {
            store.push_back( it ) ;
        }
        unordered_map<int,int>mp ;
        int mini = -1 ; 
        for ( int i = 0 ; i < store.size() ; i ++ ){
            mp[store[i][0]] ++ ;
            if ( mp[ store[i][0] ] == tops.size() ) {
                mini = store[i][0] ;
            }
        }
        if ( mini == -1 ) {
            return -1 ;
        }
        int p1 = 0 , p2 = 0 ;
        for ( int i = 0 ; i < tops.size() ; i ++ ) {
            if ( tops[i] !=mini ) {
                p1 ++ ;
            }
            if( bottoms[i] !=mini ) {
                p2 ++ ;
            }
        }
        return min( p1 , p2 ) ;
    }
};
