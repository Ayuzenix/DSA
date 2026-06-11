#include<bits/stdc++.h>
using namespace std ;

// Problem : Minimum Sum of Four Digit Number After Splitting Digits
// Platform : Leetcode 

class Solution {
public:
    int minimumSum(int num) {
        vector<int>store ; 
        while( num > 0 ) {
             int rem = num % 10 ;
             store.push_back( rem ) ;
             num = num / 10 ;
        }
        sort( store.rbegin() , store.rend() ) ;
        int mini1 = 0 , mini2 = 0 , pow1 = 1 , pow2 = 1 ;
        for ( int i = 0 ; i < store.size() ; i ++ ) { 
              if ( i == 0 || i == 3 ) {
                    mini1 = mini1 + store[i] * pow1 ;
                    pow1 = pow1 * 10 ;
              } else {
                 mini2 = mini2 + store[i] * pow2 ;
                 pow2 = pow2 * 10 ;
              }
        } 
        return ( mini1 + mini2 ) ;
    }
};
