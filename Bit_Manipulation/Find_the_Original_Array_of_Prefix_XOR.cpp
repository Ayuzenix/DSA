#include<bits/stdc++.h>
using namespace std ;

// Problem : Find the Original Array of Prefix XOR
// Platform : Leetcode 

class Solution {
public:
    vector<int> findArray(vector<int>& pref) {
        int n = pref.size() ;
        vector<int> store ( n ) ;
        store[0] = pref[0] ;
        vector<int>curr( n ) ;
        curr[0] = pref[0] ;
        for ( int i = 1 ; i < n ; i ++ ) {
             store[i] = ( curr[i-1] ^ pref[i] ) ;
             curr[i] =  ( curr[i-1] ^ store[i] ) ;
        }
        return store ; 
    }
};
