#include<bits/stdc++.h>
using namespace std ;

// Problem : Special Array With X Elements Greater Than or Equal X 
// Platform : Leetcode 

class Solution {
public:
    int specialArray(vector<int>& nums) {
        sort( nums.begin() , nums.end() ) ;
        int n = nums.size() ;
        int low = 1 , high = *max_element( nums.begin() , nums.end() ) ; // Our answer is always gonna lie in [1,high]
        int ans = -1 ;
        while ( low <= high ) {
             int mid = ( low + high ) / 2 ;
             int idx = lower_bound( nums.begin() , nums.end() , mid ) - nums.begin() ;
             int rem = n - idx ;
             if ( rem == mid ) {
                ans = mid ;
                break ;
             }
             if ( rem > mid ) {
                 low = mid + 1 ;
             } else {
                high = mid - 1 ;
             }
        }
        return ans ;
    }
};
