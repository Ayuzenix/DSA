#include<bits/stdc++.h>
using namespace std ;

// Problem : Partition Array into Disjoint Intervals
// Platform : Leetcode 

class Solution {
public:
    int partitionDisjoint(vector<int>& nums) {
        int n = nums.size() ;
        vector<int>prefix( n , 0 ) ;
        int mini = nums[n-1] ;
        for ( int i = n -1 ; i >=0 ; i -- ) {
            mini = min ( mini , nums[i] ) ;
            prefix[i] = mini ;
        }
        int maxi = nums[0] ;
        for ( int i = 0 ; i < n-1 ; i ++ ) {
            if ( maxi <= prefix[i+1]) {
               
                return ( i + 1 ) ;
            }
            maxi = max ( maxi , nums[i] ) ;
        }
        return -1 ;
    }
};
