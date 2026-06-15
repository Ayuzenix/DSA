#include<bits/stdc++.h>
using namespace std ;

// Problem : Minimum Common Value 
// Platform : Leetcode 

class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        int l1 = 0 , l2 = 0 , n = nums1.size() , m = nums2.size() ;
        int mini =INT_MAX ;
        while ( l1 < n && l2 < m ) {
              if ( nums1[l1] > nums2[l2] ) {
                l2 ++ ;
              }else if ( nums1[l1] < nums2[l2] ) {
                l1 ++ ; 
              }else {
                mini = min( mini , nums1[l1] ) ;
                break ;
              }
        }
        if ( mini == INT_MAX ) {
            return -1 ;
        }
        return mini ;
    }
};
