#include<bits/stdc++.h>
using namespace std ;

// Problem : Longest Subarray With Maximum Bitwise AND 
// Platform : Leetcode 

class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n = nums.size() , maxi = INT_MIN ;
        for ( int i = 0 ; i < n ; i ++ ) {
             maxi = max( maxi , nums[i] ) ;
        }
        int length = 1 ;
        int curr = 1 ;
        for ( int i = 1 ; i < n ; i ++ ) {
             if ( nums[i] == maxi && ( nums[i] == nums[i-1] ) ) {
                 curr ++ ;
                 length = max( length , curr ) ;
             }else {
                 curr = 1 ;
             }
        }
        return length ;
    }
};
