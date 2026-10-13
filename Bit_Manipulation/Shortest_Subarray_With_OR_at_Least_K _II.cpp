#include<bits/stdc++.h>
using namespace std ;

// Problem : Shortest Subarray With OR at Least K II 
// Platform : Leetcode 

class Solution {
public:
    int minimumSubarrayLength(vector<int>& nums, int k) {
        int n = nums.size() , l = 0 , r = 0 , curr = 0 ;
        int minlen = INT_MAX ;
        vector<int>store( 32 ) ;
        while ( r < n ) {
            curr = ( curr | nums[r] ) ;
           for ( int i = 0 ; i < ( log2( nums[r] + 1 ) ) ; i ++ ) {
                int a = ( nums[r] & ( 1 << i ) ) ;
                if ( a != 0 ) {
                    store[i] ++ ; 
                }
           }
           while ( l < r && curr >= k ) {
               minlen = min( minlen , ( r - l + 1 ) ) ;
               int x = nums[l] ; 
               for ( int i = 0 ; i < ( log2( x ) + 1 ) ; i ++ ) {
                    int a = ( x & ( 1 << i ) ) ;
                    if ( a != 0 && store[i] > 0 ) {
                        store[i] -- ; 
                        if ( store[i] == 0 ) {
                            curr = ( curr ^ ( 1 << i ) ) ;
                        }
                    }
               }
               l ++ ; 
           }
           if ( curr >= k ) {
               minlen = min( minlen , ( r - l + 1 ) ) ;
           }
           
           r ++ ; 
        }
        if ( minlen == INT_MAX ) {
            return -1 ; 
        }
        return minlen ;
    }
};
