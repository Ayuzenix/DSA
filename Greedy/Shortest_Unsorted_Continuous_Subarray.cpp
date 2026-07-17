#include<bits/stdc++.h>
using namespace std ;

// Problem : Shortest Unsorted Continuous Subarray 
// Platform : Leetcode 

class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        vector<int>store = nums ;
        sort( store.begin() , store.end() ) ;
        int l = -1 , r = -1 ;
        for ( int i = nums.size() - 1 ; i >= 0 ; i -- ) {
             if ( nums[i] != store[i] ) {
                 if ( l == -1 ) {
                    l = i ;
                 }
                 r = i ;
             }
        }
        if ( l == -1 && r == -1 ) {
            return 0 ;
        }
        return ( l - r + 1 ) ;
    }
};
