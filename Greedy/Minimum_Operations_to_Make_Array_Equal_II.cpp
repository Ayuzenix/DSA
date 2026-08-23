#include<bits/stdc++.h>
using namespace std ;

// Problem : Minimum Operations to Make Array Equal II 
// Platform : Leetcode 

class Solution {
public:
    long long minOperations(vector<int>& nums1, vector<int>& nums2, int k) {
         long long n = nums1.size() ;
         if ( k == 0 ) { 
             for ( int i = 0 ; i < n ; i ++ ) {
             if ( nums1[i] != nums2[i] ) {
                 return -1 ;
             } 
             }
             return 0 ;
         }
         for ( int i = 0 ; i < n ; i ++ ) {
              int curr = abs( nums1[i] - nums2[i] ) ;
              if ( ( curr % k ) != 0 ) {
                  return -1 ;
              }
         }
         long long countSmall = 0 , countGreater = 0 ;
         for ( int i = 0 ; i < n ; i ++ ) {
              if ( nums1[i] < nums2[i] ) { // Addition Operation is Performing 
                countSmall = countSmall + ( long long ) ( ( nums2[i] - nums1[i] ) / k ) ;
              }
              if ( nums1[i] > nums2[i] ) { // Substraction Operation is Performing 
                countGreater = countGreater + ( long long)  ( ( nums1[i] - nums2[i] ) / k ) ;
              }
         }
         if ( countSmall != countGreater ) {
             return -1 ;
         }
         return countSmall ;
    }
};
