#include<bits/stdc++.h>
using namespace std ;

// Problem : Minimum Operations to Equalize Array 
// Platform : Leetcode 

class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n = nums.size() , count = 0 , prev = nums[0] ;
        for ( int i = 1 ; i < n ; i ++ ) {
             if ( nums[i] != prev ) {
                count = 1 ;
                break ;
             }else {
                prev = nums[i] ;
             }
        }
        if ( count == 1 ) {
            return 1 ;
        } else {
            return 0 ;
        }
    }
};
