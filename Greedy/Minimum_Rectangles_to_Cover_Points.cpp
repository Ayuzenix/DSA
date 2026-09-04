#include<bits/stdc++.h>
using namespace std ;

// Problem : Minimum Rectangles to Cover Points 
// Platform : Leetcode 

class Solution {
public:
    int minRectanglesToCoverPoints(vector<vector<int>>& points, int w) {
        long long n = points.size() ;
        long long totalRectangles = 0 , l = 0 , r = 0 ;
        sort( points.begin() , points.end() , []( auto &a , auto &b ) {
             if ( a[0] == b[0] ) {
                 return b[1] > a[1] ;
             }
                 return b[0] > a[0] ;
        } ) ;
        while ( r < n ) {
             long long leftMost = points[l][0] ; // LeftMost Corner of Rectangle X Co-ordinate 
             long long rightMost = points[r][0] ; // RightMost Corner of Rectangle Y Co-ordinate 
             while ( r < n && ( rightMost - leftMost) <= w ) {
                    r ++ ;
                    if ( r < n ) {
                    rightMost = points[r][0] ;
                    }
             }
            totalRectangles ++ ;
             l = r ;
        }
        return totalRectangles ;
    }
};
