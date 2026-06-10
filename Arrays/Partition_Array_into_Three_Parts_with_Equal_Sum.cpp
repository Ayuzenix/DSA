#include<bits/stdc++.h>
using namespace std ;

// Problem : Partition Array Into Three Parts With Equal Sum
// Platform : Leetcode 

class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& arr) {
         int n = arr.size() , total_sum = 0 ;
         for ( int i = 0 ; i < n ; i ++ ) {
            total_sum = total_sum + arr[i] ;
         }
         if ( total_sum % 3 == 0 ) {
             int each = ( total_sum / 3 ) ;
             int l = 0 , r = n - 1 , lm = 0 , rm = 0 ;
             for ( l = 0 ; l < n ; l ++ ) {
                lm = lm + arr[l] ;
                if ( lm == each ) {
                    break ;
                }
             }
             for ( r = n - 1 ; r >= 0 ; r -- ) {
                rm = rm + arr[r] ;
                if ( rm == each ) {
                    break ;
                }
             }
             int rem = ( total_sum - ( lm + rm ) ) ;
             if ( ( ( r - l ) >1 ) && lm == each && rm == each && rem == each ) {
                return true ;
             }
         }
         return false ;
    }
};
