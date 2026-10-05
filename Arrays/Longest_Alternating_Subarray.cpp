#include<bits/stdc++.h>
using namespace std ;

// Problem : Longest Alternating Subarray 
// Platform : Leetcode 

class Solution {
public:
    int alternatingSubarray(vector<int>& nums) {
        int n = nums.size() ;
        int l = 0 , r = 1 , maxLen = INT_MIN ; 
        while ( r < n ) {
            if ( l % 2 == 0 ) {
                if ( r % 2 == 0 ) {
                    if ( ( nums[r] - nums[r-1] ) == -1 ) {
                        maxLen = max( maxLen , ( r - l + 1 ) ) ;
                        r ++ ; 
                    } else {
                        l ++ ;
                        r = l + 1 ; 
                    }
                } else {
                    if ( ( nums[r] - nums[r-1] ) == 1 ) {
                        maxLen = max( maxLen , ( r - l + 1 ) ) ;
                        r ++ ;
                    } else {
                        l ++ ;
                        r = l + 1 ; 
                    }
                }
            } else {
                if ( r % 2 == 0 ) {
                    if ( ( nums[r] - nums[r-1] ) == 1 ) {
                        maxLen = max( maxLen , ( r - l + 1 ) ) ;
                        r ++ ; 
                    } else {
                        l ++ ;
                        r = l + 1 ; 
                    }
                } else {
                    if ( ( nums[r] - nums[r-1] ) == -1 ) {
                        maxLen = max( maxLen , ( r - l + 1 ) ) ;
                        r ++ ;
                    } else {
                        l ++ ;
                        r = l + 1 ; 
                    }
                }
            }
        }
        if ( maxLen == INT_MIN ) {
            return -1 ; 
        }
        return maxLen ; 
    }
};
