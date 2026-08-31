#include<bits/stdc++.h>
using namespace std ;

// Problem : Minimum Array Length After Pair Removals 
// Platform : Leetcode 

class Solution {
public:
    int minLengthAfterRemovals(vector<int>& nums) {
        int n = nums.size() ;
        unordered_map<int,int>mp ;
        for ( int i = 0 ; i < n ; i ++ ) {
             mp[nums[i]] ++ ;
        } 
        int l = 0 , r = 0 ;
        int excludedElement = 0 ;
        while ( r < n ) {
             if ( nums[r] != nums[l] ) {
                 l = r ;
             }
             int lsSame = r - l  , rsSame = mp[nums[r]] - lsSame - 1 ;
             int lsDiff = ( r - lsSame ) , rsDiff = ( ( n - 1 ) - r - rsSame ) ;
             if ( lsDiff > rsDiff ) {
                 rsSame ++ ;
             } else {
                lsSame ++ ;
             }
             int lsMini  , rsMini , count1 = 0 , count2 = 0 ;
             if ( lsSame >= rsDiff ) {
                 count1 = count1 + ( rsDiff * 2 ) ;
                 rsDiff = 0 ;  
             } else {
                count1 = count1 + ( lsSame * 2 ) ;
                rsDiff = rsDiff - lsSame ;
             }
             if ( rsSame >= lsDiff ) {
                count2 = count2 + ( lsDiff * 2 ) ;
                lsDiff = 0 ;
             } else {
                count2 = count2 + ( rsSame * 2 ) ;
                lsDiff = lsDiff - rsSame ;
             }
             int finalRem = min( lsDiff , rsDiff ) ;
             excludedElement = max( excludedElement , ( count1 + count2 + ( finalRem * 2 ) ) ) ; 
             r ++ ;
        }
        return ( n - excludedElement ) ;
    }
};
