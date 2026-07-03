#include<bits/stdc++.h>
using namespace std ;

// Problem : Minimum Domino Rotations For Equal Row 
// Platform : Leetcode 

class Solution {
public:
    int toCount ( vector<int>& tops , vector<int>& bottoms , int x ) {
        int c1 = 0 , c2 = 0 ;
        for ( int i = 0 ; i < tops.size() ; i ++ ) {
             if ( tops[i] != x && bottoms[i] != x ) {
                return -1 ;
             }
             if ( tops[i] !=x ) {
                c1 ++ ;
             }
             if ( bottoms[i] != x ) {
                c2 ++ ;
             }
        }
        return min( c1 , c2 ) ;
    }

    int minDominoRotations(vector<int>& tops, vector<int>& bottoms) {
        int n = tops.size() ;
        int p1 = toCount( tops , bottoms , tops[0] ) ;
        int p2 = toCount ( tops, bottoms , bottoms[0] ) ;
        if ( p1 == -1  && p2 == -1 ) {
            return -1 ;
        }
        if ( p1 == -1 ) {
            return p2 ;
        }
        if ( p2 == -1 ) {
            return p1 ;
        }
        return min( p1 , p2 ) ;
    }
};
