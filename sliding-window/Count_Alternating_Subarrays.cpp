#include<bits/stdc++.h>
using namespace std ;

// Problem : Count Alternating Subarrays 
// Platform : Leetcode 

class Solution {
public:
    long long countAlternatingSubarrays(vector<int>& nums) {
        long long n = nums.size() ;
        long long countSubarray = n , l = 0 , r = 1 ; 
        while ( r < n ) {
            if ( ( nums[r] - nums[r-1] ) == 0 ) {
                l = r ; 
                r = l + 1 ; 
            } else {
               countSubarray = countSubarray + ( long long )( ( r - l + 1 ) - 1 ) ;
               r ++ ;
            }
        }
        return countSubarray ; 
    }
};
