#include<bits/stdc++.h>
using namespace std ;

// Problem : Counting Bits 
// Platform : Leetcode 

//--> Brute Force 
class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>store ; 
        for ( int i = 0 ; i <= n ; i ++ ) {
             int curr = i ;
             int m ;
             if (curr == 0 ) {
                m = 0 ;
             }else {
              m = log2(curr) + 1 ; 
             }
             int ones = 0 ;
             for ( int j = 0 ; j < m ; j ++ ) {
                  if ( (curr & ( 1<<j)) != 0) {
                    ones ++ ;
                  }
             }
             store.push_back( ones ) ;
        }
        return store ;
    }
};

//--> Optimal 

class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>store( n + 1 , 0 ) ;
        for ( int i = 1 ; i <=n ; i ++ ) {
            store[i] = store[i>>1] + (i&1) ;
        }
        return store ;
    }
};
