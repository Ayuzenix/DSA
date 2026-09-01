#include<bits/stdc++.h>
using namespace std ;

// Problem : Maximum Size of a Set After Removals 
// Platform : Leetcode 

class Solution {
public:
    int maximumSetSize(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size() ;
        unordered_map<int,int>mp1 ;
        unordered_map<int,int>mp2 ;
        for ( int i = 0 ; i < n ; i ++ ) {
             mp1[nums1[i]] ++ ;
             mp2[nums2[i]] ++ ;
        }
        int remove1 = 0 , remove2 = 0 ;
        for ( auto &it:mp1 ) {
             if ( remove1 >= n / 2 ) {
                 break ;
             }
             if ( it.second >=2 ) {
                 remove1 = remove1 + ( it.second - 1 ) ;
                 it.second = 1 ;
             }
        }
        for ( auto &it:mp2 ) {
             if ( remove2 >= n / 2 ) {
                 break ;
             }
             if ( it.second >= 2 ) {
                remove2 = remove2 + ( it.second - 1 ) ;
                it.second = 1 ;
             }
        }
        for ( int i = 0 ; i < n ; i ++ ) {
             if ( mp2.find( nums1[i] ) != mp2.end() && mp1[nums1[i]] > 0  ) {
                 if ( remove2 < n / 2 && mp2[nums1[i]] > 0 ) {
                     remove2 ++ ;
                     mp2[nums1[i]] -- ;
                 }
             }
             if ( mp1.find( nums2[i]) != mp1.end() && mp2[nums2[i]] > 0 ) {
                 if ( remove1 < n / 2 && mp1[nums2[i]] > 0 ) {
                     remove1 ++ ;
                     mp1[nums2[i]] -- ;
                 }
             }
        }
        int diff1 = ( ( n / 2 ) - remove1 ) , diff2 = ( ( n / 2 ) - remove2 ) , count1 = 0 , count2 = 0 ;
        if ( diff1 < 0 ) diff1 = 0 ;
        if ( diff2 < 0 ) diff2 = 0 ;
        unordered_map<int,int>mp ;
        for ( auto &it:mp1 ) {
             if ( it.second > 0 ) {
                 count1 ++ ;
                 mp[it.first] ++ ;
             }
        }
        for ( auto &it:mp2 ) {
             if ( it.second > 0 && mp.find( it.first) == mp.end() ) {
                 count2 ++ ;
                 mp[it.first] ++ ;
             }
        }
        return ( count1 + count2 - ( diff1 + diff2 )  ) ;
    }
};
