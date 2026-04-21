#include<bits/stdc++.h>
using namespace std ;

// Problem : Maximum Numbers of Pair in an Array 
// Platform : Leetcode 

class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        int n = nums.size() ;
        unordered_map<int,int>mp ;
        for ( int i = 0 ; i < n ; i ++ ) {
            mp[nums[i]]  ++ ;
        }
        int curr_pair = 0 ;
        int left_element = 0 ;
         for ( auto & it : mp ) {
            curr_pair = curr_pair + ( it.second / 2 ) ;
            left_element = left_element + ( it.second % 2 ) ;
         }
         return { curr_pair , left_element } ;
    }
};
