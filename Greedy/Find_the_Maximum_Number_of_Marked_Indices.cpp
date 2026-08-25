#include<bits/stdc++.h>
using namespace std ;

// Problem : Find the Maximum Number of Marked Indices 
// Platform : Leetcode 

class Solution {
public:
    int maxNumOfMarkedIndices(vector<int>& nums) {
        int n = nums.size() ;
        sort( nums.begin() , nums.end() ) ;
        vector<long long>store ;
        for ( int i = 0 ; i < n ; i ++ ) {
             long long curr = 2 * nums[i] ;
             store.push_back( curr ) ;
        }
        int l1 = ( n - 1 ) , l2 = ( ( n / 2 ) - 1 ) , markedIndices = 0 ; 
        while ( l1 >= ( n / 2) && l2 >= 0 ) {
              if ( store[l2] <= nums[l1] ) {
                  markedIndices = markedIndices + 2 ; 
                  l1 -- , l2 -- ;
              } else {
                l2 -- ;
              }
        }
        return markedIndices ;
    }
};
