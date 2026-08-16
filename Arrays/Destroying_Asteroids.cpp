#include<bits/stdc++.h>
using namespace std ;

// Problem : Destroying Asteroids 
// Platform : Leetcode 

class Solution {
public:
    bool asteroidsDestroyed(long long mass, vector<int>& asteroids) {
         long long n = asteroids.size() ;
         sort( asteroids.begin() , asteroids.end() ) ;
         for ( int i = 0 ; i < n ; i ++ ) {
              if ( mass >= asteroids[i] ) { 
                  mass = mass + asteroids[i] ;
              } else {
                 return false ;
              }
         }
         return true ;
    }
};
