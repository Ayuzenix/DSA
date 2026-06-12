#include<bits/stdc++.h>
using namespace std ;

// Problem : Sum of Values at Indices With K Set Bits 
// Platform : Leetcode 

class Solution {
public:
    int sumIndicesWithKSetBits(vector<int>& nums, int k) {
        int n = nums.size() , sum = 0 ;
        for ( int i = 0 ; i < n ; i ++ ) { 
             int x = i , curr = 0 ;
             while ( x > 0 ) {
                 int gama = ( x & 1 ) ;
                 if ( gama != 0 ) {
                     curr ++ ;
                 }
                 x = ( x >> 1 ) ;
             }
             if ( curr == k ) {
                 sum = sum + nums[i] ;
             }
        }
        return sum ; 
    }
};
