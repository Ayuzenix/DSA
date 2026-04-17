#include<bits/stdc++.h>
using namespace std ;

// Problem : Maximum absolute sum of subarray 
// Platform : Leetcode

class Solution {
public: // --> either Positive of either negative will be over ans
    int maxAbsoluteSum(vector<int>& nums) {
        // for Positive Number 
        int maxsum1 = 0 ;
        int currsum1 = 0 ; 
        for ( int i = 0 ; i < nums.size() ; i ++ ) {
            currsum1 = currsum1 + nums[i] ;
            if ( currsum1 < 0) {
                currsum1 = 0 ;
            }else {
                maxsum1 = max( maxsum1 , currsum1 ) ;
            }
        }
        int maxsum2 = 0 ;
        int currsum2 = 0 ;
        for ( int i = 0 ; i < nums.size() ; i ++ ) {
            currsum2 = currsum2 + nums[i] ;
            if ( currsum2 > 0 ) {
                currsum2 = 0 ;
            }else {
                int x = abs ( maxsum2 ) ;
                int y = abs ( currsum2 ) ;
                maxsum2 = max ( x , y ) ;
            }
        }
        return  max ( maxsum1 , maxsum2 ) ;
    }
};
