#include<bits/stdc++.h>
using namespace std ;

// Problem : Fruits Into Baskets II
// Platform : Leetcode 

class Solution {
public:
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
        int n = fruits.size() ;
        int count = 0 ;
        for ( int i = 0 ; i < fruits.size() ; i ++ ) {
             int curr = fruits[i] ;
             bool gama = true ;
             for ( int i = 0 ; i < baskets.size() ; i ++ ) {
                  if ( baskets[i] >= curr ) {
                      gama = false ;
                      baskets[i] = -1 ;
                      break ;
                  }
             }
             if ( gama == true ) { // Means No Pair Found
                 count ++ ;
             }
        }
        return count ;
    }
};
