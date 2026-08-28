#include<bits/stdc++.h>
using namespace std ;

// Problem : Construct the Longest New String 
// Platform : Leetcode 

class Solution {
public:
    int longestString(int x, int y, int z) {
        vector<int>store = { x , y , z } ;
        sort( store.begin() , store.end() ) ;
        int mid = store[1] , count = 0 ;
        if ( z == store[0] ) {
        if ( mid != store[2] ) {
        count = count + ( mid * 2 ) + ( ( mid + 1 ) * 2 ) ;
        count = count + ( store[0] * 2 ) ;
        } else {
        count = count + ( ( mid ) * 2 ) + ( ( mid ) * 2 ) ;
        count = count + ( store[0] * 2 ) ;
        }
        } else {
            if ( mid != store[0] ) {
            count = count + ( z * 2 ) ;
            count = count + ( store[0] * 2 ) + ( ( store[0] + 1 ) * 2 ) ;
            } else {
              count = count + ( z * 2 ) ; 
              count = count + ( store[0] * 2 ) + ( ( store[0] ) * 2 ) ;
            }
        }
        return count ;
    }  
};  
