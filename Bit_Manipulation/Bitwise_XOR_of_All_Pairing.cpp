#include<bits/stdc++.h>
using namespace std ;

// Problem : Bitwise XOR of all Pairings
// Platform : Leetcode 

class Solution {
public:
    int xorAllNums(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size() ;
        int n2 = nums2.size() ;
        int xr1 = 0 ;
        if ( n2 % 2 == 0) {
            xr1 = 0 ;
        } else {
        for ( int i = 0 ; i < n1 ;i ++ ) {
            xr1 = xr1 ^ nums1[i] ;
        }
        }
        int xr2 = 0 ;
        if ( n1 % 2 == 0 ) {
            xr2 = 0 ;
        }else {
            for ( int i = 0 ; i <n2 ; i ++ ) {
                xr2 = xr2 ^  nums2[i] ;
            }
        }
        return ( xr1 ^ xr2 ) ;
    }
};
