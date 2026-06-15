#include<bits/stdc++.h>
using namespace std ;

// Problem : Find Target Indices After Sorting Array 
// Platform : Leetcode 

class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        vector<int>result ;
        int n = nums.size() , l  , r ;
        sort( nums.begin() , nums.end() ) ;
        l = lower_bound(nums.begin() , nums.end() , target ) - nums.begin() ; //  nums[idx] >= target 
        r = upper_bound(nums.begin() , nums.end() , target ) - nums.begin() ; // nums[idx] > target ;
        for ( int i = l ; i < r ; i ++ ) {
             result.push_back( i ) ;
        }
        return result ;
    }
};
