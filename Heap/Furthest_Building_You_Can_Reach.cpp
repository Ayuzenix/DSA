#include<bits/stdc++.h>
using namespace std ;

// problem : Furthest Building You Can Reach 
// Platform : Leetcode 

class Solution {
public:
    vector<int> avoidFlood(vector<int>& rains) {
        int n = rains.size() ;
        vector<int>result( n , 1 ) ;
        vector<int>store ; 
        unordered_map<int,int>mp ; 
        for ( int i = 0 ; i < n ; i ++ ) {
             if ( rains[i] == 0 ) {
                 store.push_back( i ) ;
             } else {
                if ( mp.find( rains[i] ) == mp.end() ) {
                    result[i] = -1 ; 
                    mp[rains[i]] = i ; 
                } else {
                    int prev = mp[rains[i]] ; 
                    int idx = upper_bound( store.begin() , store.end() , prev ) - store.begin() ;
                    if ( ( idx >= i ) ) {
                        return {} ;
                    } else {
                        result[idx] = rains[i] ;
                        result[i] = -1 ; 
                        mp[rains[i]] = i ; 
                        int j = idx + 1 ; 
                        while ( j < store.size() ) {
                            store[j-1] = store[j] ;
                            j ++ ; 
                        }
                        store.pop_back() ;
                    }
                }
             }
        }
        return result ; 
    }
};
