#include<bits/stdc++.h>
using namespace std ;

// Problem : Minimum Deletions to Make Character Frequencies Unique 
// Platform : Leetcode 

class Solution {
public:
    int minDeletions(string s) {
        int n = s.size() , count = 0 ;
        unordered_map<int,int>mp ;
        for ( int i = 0 ; i < n ; i ++ ) {
             mp[s[i]] ++ ;
        }
        vector<int>store ;
        for( auto &it:mp ) {
            store.push_back( it.second ) ;
        }
        sort( store.rbegin() , store.rend() ) ;
        unordered_map<int,int>mp1 ;
        mp1[store[0]] ++ ;
        for ( int i = 1 ; i < store.size() ; i ++ ) { 
             if ( mp1.find( store[i] ) == mp1.end() ) {
                 mp1[store[i]] ++ ;
             } else {
                int x = store[i-1] - 1 ;
                if ( x < 0 ) { // Since frequency of 0 is being ignored 
                     x = 0 ;
                }
                int diff = abs( store[i] - x ) ;
                count = count + diff ;
                store[i] = x ;
                mp1[x] ++ ;
             }
        }
        return count ;
    }
};
