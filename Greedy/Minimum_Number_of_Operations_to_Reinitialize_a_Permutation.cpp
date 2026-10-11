#include<bits/stdc++.h>
using namespace std ;

// Problem : Minimum Number of Oprations to Reinitialize a Permutation 
// Platform : Leetcode 

class Solution {
public:

    vector<int>solve( vector<int>store ) {
        vector<int>curr ;
        int n = store.size() ;
        int i = 0 , j = ( n / 2 ) ;
        while ( ( i < n / 2 ) && ( j < n ) ) {
             curr.push_back( store[i] ) ;
             curr.push_back( store[j] ) ;
             i ++ ; 
             j ++ ; 
        }
        store = curr ; 
        return store ; 
    }

    int reinitializePermutation(int n) {
        vector<int>arr( n ) ;
        for ( int i = 0 ; i < n ; i ++ ) {
             arr[i] = i ; 
        }
        int count = 1 ;
        vector<int>perm = solve( arr ) ;
        while ( perm != arr ) {
             perm = solve( perm ) ;
             count ++ ; 
        }
        return count ; 
    }
};
