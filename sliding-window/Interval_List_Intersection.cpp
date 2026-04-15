#include<bits/stdc++.h>
using namespace std ;

// Problem : Interval List Intersection 
// Platform : Leetcode 

class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& firstList, vector<vector<int>>& secondList) {
         vector<vector<int>>result ;
         int n = firstList.size() ;
         int m = secondList.size() ;
         int l = 0 , r = 0 ;
         while ( l < n && r < m ) {
            int x = max ( firstList[l][0] , secondList[r][0] ) ;
            int y = min ( firstList[l][1] , secondList[r][1] ) ;
            if ( x <= y ) {
                result.push_back ( { x , y } ) ;
            }
            if ( firstList[l][1] == secondList[r][1] ) {
                r ++ ;
                l ++ ;
            } else if ( firstList[l][1] > secondList[r][1] ) {
                r ++ ;
            }else {
                l ++ ;
            }
         }
        return result ;
    }
};
