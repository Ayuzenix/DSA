#include<bits/stdc++.h>
using namespace std ;

// Problem : The K Weakest Rows in a Matrix 
// Platform : Leetcode 

class Solution {
public: // Indices -->>>> Representing rows here 
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq ;
        for ( int i = 0 ; i < mat.size() ; i ++ ) {
             int countOnes = 0 ;
             for ( int j = 0 ; j < mat[i].size() ; j ++ ) {
                 if ( mat[i][j] == 1 ) {
                     countOnes ++ ;
                 }
             }
             pq.push( { countOnes , i } ) ;
        }
        vector<int>result ;
        int count = 0 ;
        while ( count != k ) {
             result.push_back( pq.top().second ) ;
             pq.pop() ;
             count ++ ;
        }
        return result ; 
    }
};
