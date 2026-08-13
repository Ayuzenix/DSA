#include<bits/stdc++.h>
using namespace std ;

// Problem : Minimum Elements to Add to Form a Given Sum 
// Platform : Leetcode 

class Solution {
public:
    int minElements(vector<int>& nums, long long limit, long long goal) {
        long long n = nums.size() , sum = 0 ;
        for ( int i = 0 ; i < n ; i ++ ) {
             sum = sum + ( long long)nums[i] ;
        }
        if ( sum == goal ) {
            return 0 ;
        }
        long long diff = abs( goal - sum ) ;
        if ( diff % limit == 0 ) {
             return diff / limit ;
        }
        return ( diff / limit ) + 1 ;
    }
};
