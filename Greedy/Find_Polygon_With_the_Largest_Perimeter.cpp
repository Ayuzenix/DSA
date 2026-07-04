#include<bits/stdc++.h>
using namespace std ;

// Problem : Find Polygon With the Largest Perimeter 
// Platform : Leetcode 

class Solution {
public:
    long long largestPerimeter(vector<int>& nums) {
        long long n = nums.size() , sum = 0 ;
        sort( nums.begin() , nums.end() ) ;
        vector<long long>prefixSum( n ) ;
        for ( long long i = 0 ; i < n ; i ++ ) {
             if( i == 0 ) {
                prefixSum[i] = ( long long )nums[i] ;
             } else {
                prefixSum[i] = ( long long )nums[i] + prefixSum[i-1] ;
             }
        }
        for ( long long i = n - 1 ; i > 0 ; i -- ) {
             long long curr = prefixSum[i] - ( long long )nums[i] ;
             if ( curr > nums[i] ) {
                return prefixSum[i] ;
             }
        }
        return -1 ;
    }
};
