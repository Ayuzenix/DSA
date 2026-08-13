#include<bits/stdc++.h>
using namespace std ;

// Problem : Merge Triplets to Form Target Triplet 
// Platform : Leetcode 

class Solution {
public:
    bool mergeTriplets(vector<vector<int>>& triplets, vector<int>& target) {
         int n = triplets.size() , a = target[0] , b = target[1] , c = target[2] ;
         vector<int>store = { 0 , 0 , 0 } ;
         for ( int i = 0 ; i < n ; i ++ ) {
              int x = triplets[i][0] , y = triplets[i][1] , z = triplets[i][2] ;
              if ( x <=a && y <= b && z <= c ) {
                  store[0] = max( store[0] , x ) , store[1] = max( store[1] , y ) , store[2] = max( store[2] , z ) ;
              }
         }
         return ( store == target ) ;
    }
};
