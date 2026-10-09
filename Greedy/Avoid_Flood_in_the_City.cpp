#include<bits/stdc++.h>
using namespace std ;

// Problem : Avoid Flood in the City 
// Platform : Leetcode 

class Solution {
public:
    vector<int> avoidFlood(vector<int>& rains) {
        int n = rains.size() ;
        set<int>st ; // Sorted + Unique 
        unordered_map<int,int>mp ; 
        vector<int>result ( n , 1 ) ;
        for ( int i = 0 ; i < n ; i ++ ) {
             if ( rains[i] == 0 ) {
                 st.insert( i ) ;
             } else {
                if ( mp.find( rains[i] ) == mp.end() ) {
                    result[i] = -1 ; 
                    mp[rains[i]] = i ; 
                } else {
                    int prev = mp[rains[i]] ; 
                    auto it = st.upper_bound( prev ) ;
                    if ( it == st.end() ) {
                        return {} ;
                    } else {
                        int currIdx = *it ;
                        result[currIdx] = rains[i] ;
                        mp.erase( rains[i] ) ;
                        st.erase( it ) ;
                        result[i] = -1 ; 
                        mp[rains[i]] = i ; 
                    }
                }
             }
        }
        return result ; 
    }
};
