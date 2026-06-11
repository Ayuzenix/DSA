#include<bits/stdc++.h>
using namespace std ;

// Problem : Minimum Number of Flips to Reverse Binary String 
// Platform : Leetcode 

class Solution {
public:
    int minimumFlips(int n) {
        vector<int>store ; 
        while ( n > 0 ) {
             int curr = ( n & 1 ) ;
             store.push_back( curr ) ;
            n = ( n >>1 ) ;
        }
        reverse( store.begin() , store.end() ) ;
        int l = 0 , r = store.size() - 1 , count = 0 ;
        while ( l < r ) {
             if ( store[l] != store[r] ) {
                count = count + 2 ;
             }
             l ++ ;
             r -- ;
        }
        return count ;
    }
};
