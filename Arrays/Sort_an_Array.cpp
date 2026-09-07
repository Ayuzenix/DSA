#include<bits/stdc++.h>
using namespace std ;

// Problem : Sort an Array 
// Platform : Leetcode 

class Solution {
public:
    
    void merge( vector<int>&nums , int left , int right ) {
         int mid = ( left + right ) / 2 ;
         int l = left , r = mid + 1 ;
         vector<int>temp ;
         while ( l <= mid && r <= right ) {
             if ( nums[l] <= nums[r] ) {
                 temp.push_back( nums[l] ) ;
                 l ++ ;
             } else {
                temp.push_back( nums[r] ) ;
                r ++ ;
             }
         }
         while ( r <= right ) {
             temp.push_back( nums[r] ) ;
             r ++ ;
         }
         while ( l <= mid ) {
            temp.push_back( nums[l] ) ;
            l ++ ;
         }
         int k = 0 ;
         for ( int i = left ; i <= right ; i ++ ) {
              nums[i] = temp[k] ;
              k ++ ;
         }
    }

    void mergeSort( vector<int>&nums , int left , int right ) {
         if ( left >= right ) {
             return ;
         }
         int mid = ( left + right ) / 2 ;
         mergeSort( nums , left , mid ) ;
         mergeSort( nums , mid + 1 , right ) ;
         merge( nums , left , right ) ;
    }

    vector<int> sortArray(vector<int>& nums) {
        int n = nums.size() ;
        mergeSort( nums , 0 , n - 1 ) ;
        return nums ;
    }
};
