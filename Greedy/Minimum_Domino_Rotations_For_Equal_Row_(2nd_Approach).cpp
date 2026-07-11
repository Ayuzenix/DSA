#include<bits/stdc++.h>
using namespace std ;

// Problem : Minimum Domino Rotations for Equal Row( 2nd Approach ) 
// Platform : Leetcode 

class Solution {
public:
    int minDominoRotations(vector<int>& tops, vector<int>& bottoms) {
        unordered_map<int,int>mp1 ;
        unordered_map<int,int>mp2 ;
        for ( int i = 0 ; i < tops.size() ; i ++ ) {
            mp1[tops[i]] ++ ;
            mp2[bottoms[i]] ++ ;
        }
        int x , y , maxi1 = INT_MIN , maxi2 = INT_MIN ;
        for ( auto & it: mp1 ) {
             if ( it.second > maxi1 ) {
                x = it.first ;
                maxi1 = it.second ;
             }
        }
        for ( auto & it: mp2 ) {
             if ( it.second > maxi2 ) {
                y = it.first ;
                maxi2 = it.second ;
             }
        }
        int count1 = 0 , count2 = 0 ;
        for ( int i = 0 ; i < tops.size() ; i ++ ) { 
             if ( tops[i] != x && bottoms[i] != x ) {
                count1 = -1 ;
                break ;
             }
             if ( tops[i] == x ) {
                continue ;
             } else {
                count1 ++ ;
             }
        }
        for ( int i = 0 ; i < tops.size() ; i ++ ) { 
             if ( tops[i] != y && bottoms[i] != y ) {
                count2 = -1 ;
                break ;
             }
             if ( bottoms[i] == y ) {
                continue ;
             } else {
                count2 ++ ;
             }
        }
        if ( count1 == -1 && count2 == -1 ) return -1 ;
        if ( count1 == -1 ) return count2 ;
        if ( count2 == -1 ) return count1 ;
        return min( count1 , count2 ) ;
    }
};
