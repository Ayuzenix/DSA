#include<bits/stdc++.h>
using namespace std ;

// Problem : K Closest Points to Origin 
// Platform : Leetcode 

class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
          int n = points.size() ;
          priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq ; // Min Heap 
          for ( int i = 0 ; i < n ; i ++ ) {
               long long x = points[i][0] , y = points[i][1] ;
               long long curr = ( ( x * x ) + ( y * y ) ) ;
               pq.push( { curr , i } ) ;
          }
          vector<vector<int>>result ;
          int count = 0 ;
          while ( count < k ) {
               int idx = pq.top().second ;
               result.push_back( { points[idx][0] , points[idx][1] } ) ;
               pq.pop() ;
               count ++ ;
          }
          return result ;
    }
};
