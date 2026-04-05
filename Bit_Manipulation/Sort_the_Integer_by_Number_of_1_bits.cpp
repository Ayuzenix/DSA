#include<bits/stdc++.h>
using namespace std ; 

// Problem : Sort the Integer by Number of 1 Bits 
// Platform : Leetcode 

class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
           int n = arr.size()  ;
           vector<pair<int,int>>store ;
           for ( int i = 0 ; i < n ; i ++ ) {
                int count = 0 ;
                int m ;
                if ( arr[i] !=0 ) {
                 m = log2( arr[i] ) + 1 ;
                }else {
                 m = 1 ;
                }
                for ( int j = 0 ; j < m ; j ++ ) {
                    int x = ( (arr[i]) & ( 1 << j ) ) ;
                    if ( x != 0 ) {
                        count ++ ;
                    }
                }
                store.push_back( { arr[i] , count } ) ;
           }
           sort ( store.begin() , store.end() , [] ( auto & a , auto & b ) {
                 if ( b.second == a .second) {
                    return b.first > a.first ; // Increasing Order 
                 }
                 return b.second > a.second ;  // Increasing Order 
           });
           vector<int>result;
           for ( auto & it: store ) {
            result.push_back( it.first ) ;
           }
           return result ;
    }
};
