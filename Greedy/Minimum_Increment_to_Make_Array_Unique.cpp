#include<bits/stdc++.h>
using namespace std ;

// Problem : Minimum Increment to Make Array Unique 
// Platform : Leetcode 

class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
        int n = nums.size() , count = 0 , prev = -1 ;
        sort( nums.begin() , nums.end() ) ;
        unordered_map<int,int>mp ;
        for ( int i = 0 ; i < n ; i ++ ) {
             if ( mp.find( nums[i] ) == mp.end() ) {
                  mp[nums[i]] = 1 ;
                  prev = nums[i] ;
             } else {
                if ( prev == -1 ) {
                     count = count + 1 ;
                     mp[nums[i]+1] = 1 ;
                     prev = nums[i] + 1 ;
                } else {
                     count = count + ( prev - nums[i] + 1 ) ;
                     mp[prev+1] = 1 ;
                     prev = prev + 1 ;
                }
             }
        }
        return count ;
    }
};
