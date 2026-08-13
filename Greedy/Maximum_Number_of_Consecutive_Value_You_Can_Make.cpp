#include<bits/stdc++.h>
using namespace std ;

// Problem : Maximum Number of Consecutive Values you can get 
// Platform : Leetcode 

class Solution {
public:
    int getMaximumConsecutive(vector<int>& coins) {
        int n = coins.size() ;
        sort( coins.begin() , coins.end() ) ;
        int maxi = 0 , sum = 0 , ans = 0 ;
        for ( int i = 0 ; i < n ; i ++ ) {
              if ( ( coins[i] - sum ) >= 2 ) {
                  return ( sum + 1 ) ;
              } 
              sum = sum + coins[i] ;
        }
        return ( sum + 1 ) ;
    }
};
