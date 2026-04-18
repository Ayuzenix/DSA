#include<bits/stdc++.h>
using namespace std ;

// Problem : Split the Array into Maximum Number of Subarray 
// Platform : Leetcode 

class Solution {
public:
    int maxSubarrays(vector<int>& nums) {
        int n = nums.size() , count = 0 , l = 0 , r = 0 ,  start = nums[0] ; 
         if ( n == 1 ) {
            return 1 ;
        }
        for ( int i = 0 ; i < n ; i ++ ) {
            start = start & nums[i] ;
            if ( start == 0 ) {
                count ++ ;
                if ( i < n -1 ) {
                    start = nums[ i + 1 ] ;
                }
            }
        }
        if ( count == 0 ) {
            return 1 ;
        }
        return  ( count  )  ;
    }
};
