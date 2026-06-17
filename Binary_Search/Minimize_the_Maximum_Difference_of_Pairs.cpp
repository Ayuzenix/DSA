#include<bits/stdc++.h>
using namespace std ;

// Problem : Minimize the Maximum Difference of Pairs 
// Platform : Leetcode 

class Solution {
public:
    
    long long toCount ( vector<int>& nums , long long mid ) {
         long long count = 0 ;
         for ( int i = 1 ; i < nums.size() ; i ++ ) {
             long long diff = ( nums[i] - nums[i-1] ) ;
             if ( diff <= mid ) {
                 count ++ ;
                 i ++ ;
             }
         }
         return count ;
    }

    int minimizeMax(vector<int>& nums, int p) {
        long long n = nums.size() ;
        sort( nums.begin() , nums.end() ) ;
        long long low = 0 , high = ( nums[n-1] - nums[0] ) ;
        long long ans = 0 ;
        while ( low <= high ) {
             long long mid = ( low + high ) / 2 ;
             if ( toCount ( nums , mid ) >= p ) {
                ans = mid ;
                high = mid - 1  ;
             } else {
                low = mid + 1 ;
             }
        }
        return ans ;
    }
};
