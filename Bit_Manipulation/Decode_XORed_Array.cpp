#include<bits/stdc++.h>
using namespace std ;

// Problem : Decode XORred Array 
// Platform : Leetcode 

class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
           int n = encoded.size() ;
           vector<int> store ( n + 1 , 0 ) ;
           store[0] = first ;
           for ( int i = 0 ; i < n ; i ++ ){
            int curr = ( store[i] ^ encoded[i] ) ;
            store[ i + 1 ] = curr ;
           }
           return store ;
    }
};
