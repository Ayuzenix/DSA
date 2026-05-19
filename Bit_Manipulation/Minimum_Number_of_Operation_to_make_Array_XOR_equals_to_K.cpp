#include<bits/stdc++.h>
using namespace std ;

// Problem : Minimum Number of Operation to Make Array XOR equals to K 
// Platform : Leetcode 


   class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int curr = 0 ;
        int n = nums.size() ;
        for ( int i = 0 ; i < n ; i ++ ) {
            curr = curr ^ nums[i] ;
        }
        int count = 0 ; 
        int m ; 
       
        for ( int i = 0 ; i < 32 ; i ++ ) {
            int x = ( curr & ( 1 << i ) ) ;
            int y = ( k & ( 1 << i ) ) ;
            if ( x != y ) {
                count ++ ;
            }
        }
        return count ;
    }
};



