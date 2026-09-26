#include<bits/stdc++.h>
using namespace std ;

// Problem : Find Kth Largest XOR Coordinate Value
// Platform : Leetcode 

class Solution {
public:
    int kthLargestValue(vector<vector<int>>& matrix, int k) {
        int n = matrix.size() , m = matrix[0].size() ;
        vector<vector<int>>store( n , vector<int>( m ) ) ;
        priority_queue<int>pq ;
        for ( int i = 0 ; i < m ; i ++ ) { // Column
             int curr = 0 ;
             for ( int j = 0 ; j < n ; j ++ ) { // Row 
                  curr = ( curr ^ matrix[j][i] ) ;
                  if ( ( i - 1 ) >=0 ) {
                      store[j][i] = ( ( curr ^ store[j][i-1] ) ) ;
                  } else {
                      store[j][i] = curr ;
                  }
                  pq.push( store[j][i] ) ;
             }
        }
        k -- ;
        while ( !pq.empty() && k > 0 ) {
            pq.pop() ;
            k -- ;
        }
        return pq.top() ;
    }
};
