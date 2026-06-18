#include<bits/stdc++.h>
using namespace std ;

// Problem : Count the Number of Fair Pairs 
// Platform : Leetcode 

class Solution {
public:
    long long countFairPairs(vector<int>& nums, int lower, int upper) {
        long long count = 0 , n = nums.size() ;
        sort( nums.begin() , nums.end() ) ;
        long long l = 0 , r = n - 1 ;
        while ( l < r ) {
             long long sum = (long long)nums[l] +( long long)nums[r] ;
             if ( sum > upper ) {
                r -- ;
             } else if ( sum < lower ) {
                l++ ;
             } else { // Means we have done finding a interval
             int rem = ( long long) upper - ( long long)nums[r] ;
             int idx = upper_bound( nums.begin() , nums.end() , rem ) - nums.begin() - 1 ;
             if ( idx >= r ) {
                 count = ( long long ) count + ( idx - l + 1 ) - ( idx - r + 1 ) ; // cause r itself count twice 
             } else {
                 count = ( long long)count + ( idx - l + 1 ) ;
             }
             r -- ;
             }
        }
        return count ;
    }
};
