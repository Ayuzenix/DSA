#include<bits/stdc++.h>
using namespace std ;

// Problem : Equal Sum Array With Minimum Number of Operations 
// Platform : Leetcode 

class Solution {
public:
    int solve ( int sum1 , int sum2 , vector<int> nums1, vector<int> nums2 ) {
        int mini = 1 * ( nums1.size() ) , maxi = 6 * ( nums2.size()  ) , count = 0 ;
        if ( maxi < mini ) {
            return -1 ;
        }
        int b = nums1.size() - 1 , s = 0 ;
        while ( b >=0 || s < nums2.size() ) {
             if ( sum1 <= sum2 ) {
                return count ;
             }
             int change1 = -1 , change2 = -1 ;
             if( b >= 0 ) {
             change1 = abs( nums1[b] - 1 ) ;
             }
             if ( s < nums2.size() ) {
             change2 = abs( 6 - nums2[s] ) ;
             }
             if ( change1 > change2 ) {
                sum1 = sum1 - nums1[b] + 1 ;
                b -- ;
                count ++ ;
             } else {
                sum2 = sum2 - nums2[s] + 6 ;
                s ++ ;
                count ++ ;
             }
        }
        return count ;
    }
    int minOperations(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size() , m = nums2.size() , sum1 = 0 , sum2 = 0 ;
        sort( nums1.begin() , nums1.end() ) ;
        sort( nums2.begin() , nums2.end() ) ;
        for ( int i = 0 ; i < n ; i ++ ) {
            sum1 = sum1 + nums1[i] ;
        }
        for( int i = 0 ; i < m ; i ++ ) {
           sum2 = sum2 + nums2[i] ;
        }
        if ( sum1 == sum2 ) {
            return 0 ;
        }
        if ( sum1 > sum2 ) {
            return solve( sum1 , sum2 , nums1 , nums2 ) ;
        } else {
            return solve ( sum2 , sum1 , nums2 , nums1 ) ;
        }
    }
};
