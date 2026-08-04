#include<bits/stdc++.h>
using namespace std ;

// Problem : Smallest Range II 
// Platform : Leetcode 

class Solution {
public:
    int smallestRangeII(vector<int>& nums, int k) {
        int n = nums.size() ;
        sort( nums.begin() , nums.end() ) ;
        int maxi = nums[n-1] - k , mini = nums[0] + k , ans = nums[n-1] - nums[0] ;
        for ( int i = 0 ; i < n - 1 ; i ++ ) {
            int currmax = max( maxi , nums[i] + k ) ;
            int currmin = min( mini , nums[i+1] - k ) ;
            ans = min( ans , ( currmax - currmin ) ) ;
        }
        if ( ans == INT_MAX ) {
            return 0 ;
        }
        return ans ;
    }
};
