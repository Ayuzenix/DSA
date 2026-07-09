#include<bits/stdc++.h>
using namespace std ;

// Problem : Advantage Shuffle 
// Platform : Leetcode 

class Solution {
public:
    vector<int> advantageCount(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size() ;
        vector<vector<int>>store ;
        for ( int i = 0 ; i < n ; i ++ ) {
             store.push_back( { nums2[i] , i } ) ;
        }
        sort( store.begin() , store.end() , []( auto &a , auto &b ){
            return b[0] > a[0] ;
        }) ;
        sort( nums1.begin() , nums1.end() ) ;
        int l = 0 , r = n - 1 , i = n - 1 ; 
        vector<int>result( n , -1 ) ;
        while ( i >=0 ) {
            if ( store[i][0] < nums1[r] ) {
                result[store[i][1]] = nums1[r] ;
                r -- ;
            } else {
                result[store[i][1]] = nums1[l] ;
                l ++ ;
            }
             i -- ;
        }
        return result ;
    }
};
