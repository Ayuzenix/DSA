#include<bits/stdc++.h>
using namespace std ;

// Problem : Minimum Number of Pushes to Type Word II 
// Platform : Leetcode 

class Solution {
public:
    int minimumPushes(string word) {
        int n = word.size() ;
        unordered_map<char,int>mp ;
        for ( int i = 0 ; i < n ; i ++ ) {
             mp[word[i]] ++ ;
        }
        vector<int>store ;
        for ( auto & it:mp ) {
            store.push_back( it.second ) ;
        }
        sort( store.rbegin() , store.rend() ) ;
        int totalPushes = 0 , encountered = 0 ;
        for( int it = 0 ; it < store.size() ; it ++ ) {
            if ( encountered < 8 ) {
                totalPushes = totalPushes + store[it] ;
                encountered ++ ;
            } else if ( encountered >= 8 && encountered < 16 ) {
                totalPushes = totalPushes + ( store[it] * 2 ) ;
                encountered ++ ;
            } else if ( encountered >= 16 && encountered < 24 ) {
                totalPushes = totalPushes + ( store[it] * 3 ) ;
                encountered ++ ;
            } else if ( encountered >= 24 && encountered < 26 ) {
                totalPushes = totalPushes + ( store[it] * 4 ) ;
                encountered ++ ;
            }
        }
        return totalPushes ;
    }
};
