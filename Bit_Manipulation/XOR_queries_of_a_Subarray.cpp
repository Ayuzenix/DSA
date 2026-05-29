#include<bits/stdc++.h>
using namespace std ;

// Problem : XOR queries of a Subarray 
// Platform : Leetcode 

class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        int n = arr.size() ;
        vector<int>store( n , 0 ) ;
        for ( int i = 0 ; i < n ; i ++ ) {
            if ( i > 0 ) {
            store[i] = ( arr[i] ^ store[i-1] ) ;
            } else {
                store[i] = arr[i] ;
            }
        }
        vector<int>result ; 
        for ( int i = 0 ; i < queries.size() ; i ++ ) {
             int curr ;
             int x = queries[i][0] ;
             int y = queries[i][1] ;
             if ( x == 0 ) {
                 curr = store[y] ;
             } else {
                curr = ( store[x-1] ^ store[y] ) ;
             }
             result.push_back( curr ) ;
        }
        return result ;
    }
}; 
