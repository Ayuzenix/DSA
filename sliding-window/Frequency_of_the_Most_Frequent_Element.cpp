#include<bits/stdc++.h>
using namespace std ;

// Problem : Frequency of the Most Frequent Element 
// Platform : Leetcode 

// -->>>> Optimal Solution 

class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        long long n = nums.size() ;
        sort( nums.begin() , nums.end() ) ;
        long long curr = 0 , maxi = 1 ;
        long long l = 0 , r = 0 ;
        while ( r < n ) {
             long long len  ;
             if ( l != r ) {
                len = ( r - l ) ;
                curr = curr + ( long long) len * ( nums[r] - nums[r-1] )  ;
             }
             while ( l <=r && curr > k ) {
                curr =curr - ( nums[r] - nums[l] ) ;
                l ++ ;
             }
             if ( ( r - l + 1 ) > maxi ) {
                maxi = ( r - l + 1 ) ;
             }
             r ++ ;   
        }
        return maxi ;
    }
};

// -->>>> Brute Force Solution 

class Solution {
public: 
    int maxFrequency(vector<int>& nums, int k) {
        long long n = nums.size() ,  maxi = 1 ;
        sort ( nums.begin() , nums.end() ) ;
        for ( long long i = n - 1 ; i >=0 ; i -- ) {
             long long curr = k , count = 1 ;
             for ( long long j = i - 1 ; j >= 0 ; j -- ) {
             long long diff = nums[i] - nums[j] ; 
             curr = curr - diff ; 
             if ( curr < 0 ) {
                break ;
             } else {
                count ++ ;
                maxi = max( maxi , count ) ;
             }
             }
        }
        return maxi ;
    }
};

// Optimal Approach 

