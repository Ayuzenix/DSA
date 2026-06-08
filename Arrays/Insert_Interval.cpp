#include<bits/stdc++.h>
using namespace std ;

// Problem : Insert Interval 
// Platform : Leetcode 

class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
      vector<vector<int>>result ;
      int n = intervals.size() ;
      int l = 0 ; 
      while ( l < n && intervals[l][1] < newInterval[0] ) {
           result.push_back( { intervals[l][0] , intervals[l][1] } ) ;
           l ++ ;
      } 
      while ( l < n && intervals[l][0] <= newInterval[1] ) {
             newInterval[0] = min( newInterval[0] , intervals[l][0] ) ;
             newInterval[1] = max( newInterval[1] , intervals[l][1] ) ;
             l ++ ;
      }
      result.push_back( { newInterval[0] , newInterval[1] } ) ;
      while ( l < n ) {
        result.push_back( { intervals[l][0] , intervals[l][1] } ) ;
        l ++ ;
      }
      return result ;
    }
};
