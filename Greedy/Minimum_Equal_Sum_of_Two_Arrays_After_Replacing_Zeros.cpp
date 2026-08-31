#include<bits/stdc++.h>
using namespace std ;

// Problem : Minimum Equal Sum of Two Arrays After Replacing Zeros 
// Platform : Leetcode 

class Solution {
public:
    long long minSum(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size() , m = nums2.size() ; 
        long long sum1 = 0 , sum2 = 0 , Zeros1 = 0 , Zeros2 = 0 ;
        for( int i = 0 ; i < n ; i ++ ) {
            sum1 = sum1 + nums1[i] ;
            if ( nums1[i] == 0 ) {
                Zeros1 ++ ;
            }
        }
        for ( int i = 0 ; i < m ; i ++ ) {
            sum2 = sum2 + nums2[i] ;
            if ( nums2[i] == 0 ) {
                Zeros2 ++ ;
            }
        }
        long long sum ; // sum1 + Zeros1 == sum2 + Zeros2 
        // Non Existing Case 
        if ( Zeros1 == 0 && Zeros2 == 0 ) {
             if ( sum1 != sum2 ) {
                 return -1 ;
             }
             return sum1 ;
        } else if ( Zeros1 == 0 ) {
            if ( ( sum2 + Zeros2 ) > sum1 ) {
                return -1 ;
            }
            return sum1 ;
        } else if ( Zeros2 == 0 ) {
            if ( ( sum1 + Zeros1 ) > sum2 ) {
                 return -1 ;
            }
            return sum2 ;
        }
        return max( ( sum1 + Zeros1 ) , ( sum2 + Zeros2 ) ) ;
    }
};
