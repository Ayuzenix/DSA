#include<bits/stdc++.h>
using namespace std ;

// Problem : Number of Subsequences That Satisfy the Given Sum Condition 
// Platform : Leetcode 

class Solution {
public:

    int numSubseq(vector<int>& nums, int target) {
        long long n = nums.size() ;
        sort ( nums.begin() , nums.end() ) ;
        long long mod = 1e9 + 7 ;
        long long l = 0 , r = n - 1 , count = 0 ;
        vector<int>store(n) ;
        store[0] = 1 ;
        for ( int i = 1 ; i < n ; i ++ ) {
            store[i] = ( store[i-1] * 2 ) % mod ;
        }
        while ( l <= r ) {
            long long sum = nums[l] + nums[r] ;
            if ( sum > target ) {
                 sum = sum - nums[r] ;
                 r -- ;
            } else {
                 count = count + ( store[r-l] ) % mod  ;
                 l ++ ;
            }
        }
        return count % mod  ; 
    }
};
