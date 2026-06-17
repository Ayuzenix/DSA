#include<bits/stdc++.h>
using namespace std ;

// Problem : House Robber IV 
// Platform : Leetcode 

class Solution {
public: // If there states maximum of minimum or these type of Statement than definately it's time to look at Binary Search
    int toCount ( vector<int>&nums , int mid  ) {
        int count = 0 ;
        for ( int i = 0 ; i < nums.size() ; i ++ ) {
             if ( nums[i] <= mid ) {
                 count ++ ;
                 i ++ ;
             }
        }
        return count ;
    }

    int minCapability(vector<int>& nums, int k) {
        int n = nums.size() ;
        int low = *min_element( nums.begin() , nums.end() ) , high = *max_element( nums.begin() , nums.end() ) ;
        int ans = high ;
        while ( low <= high ) {
             int mid = ( low + high ) / 2 ;
             if ( toCount( nums , mid ) >= k ) {
                ans = mid ;
                high = mid - 1 ;
             } else {
                low = mid + 1 ;
             }
        }
        return ans ;
    }
};
