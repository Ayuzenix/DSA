#include<bits/stdc++.h>
using namespace std ;

// Problem : Minimum Operations to Make the Array Increasing 
// Platform : Leetcode 

class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n = nums.size() , count = 0 ;
        for ( int i = 1 ; i < n ; i ++ ) {
             if ( nums[i] <= nums[i-1] ) {
                 count = count + ( nums[i-1] - nums[i] + 1 ) ;
                 nums[i] = nums[i-1] + 1 ;
             }
        }
        return count ;
    }
};
