#include<bits/stdc++.h>
using namespace std ;

// Problem : Maximum Score From Removing Stones
// Platform : Leetcode 

class Solution {
public:
    int maximumScore(int a, int b, int c) {
        vector<int>store ;
        store.push_back( a ) , store.push_back( b ) , store.push_back( c ) ;
        sort( store.begin() , store.end() ) ;
        int count = 0 , r1 = 0 , r2 = 2 ;
        while ( r1 < r2 ) {
               while ( r1 < 3 && store[r1] == 0 ) {
                    r1 ++ ;
               }
               while ( r2 > 0 && store[r2] == 0 ) {
                 r2 -- ;
               }
               if ( r1 >= r2 ) {
                  return count ;
               } else {
                 store[r1] -- ;
                 store[r2] -- ;
                 count ++ ;
               }
               if ( r1 == 0 && store[r1] < store[r1+1] ) {
                   swap( store[r1] , store[r1+1] ) ;
               }
               if ( r2 == 2 && store[r2] < store[r2-1] ) {
                   swap( store[r2] , store[r2-1] ) ;
               }
        }   
        return count ;           
    }
};
