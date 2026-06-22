#include<bits/stdc++.h>
using namespace std ;

// Problem : Split Array Largest Sum 
// Platform : Leetcode 

class Solution {
public:
    // These Smaller Parts can be Broken to achive till k if curr parts are lesser then k 
    int toCount( vector<int>& nums , int mid ) {
        int curr = nums[0] , count = 1 ;
        for ( int i = 1 ; i < nums.size() ; i ++ ) {
            if ( ( curr + nums[i] ) > mid ) {
                count ++ ;
                curr =nums[i] ;
            } else {
                curr = curr + nums[i] ;
            }
        }
        return count ;
    }

    int splitArray(vector<int>& nums, int k) {
        int n = nums.size() , sum = 0 ;
        for ( int i = 0 ; i < n ; i ++ ) {
            sum = sum + nums[i] ;
        }
        int low = *max_element( nums.begin() , nums.end() ) , high = sum , ans = sum ;
        while ( low <= high ) {
            int mid = ( low + high ) / 2 ;
            if ( toCount( nums , mid ) <= k ) {
                ans = mid ;
                high = mid - 1 ;
            } else if ( toCount ( nums , mid ) > k ) {
                low = mid + 1 ;
            } 
        }
        return ans ;
    }
};
