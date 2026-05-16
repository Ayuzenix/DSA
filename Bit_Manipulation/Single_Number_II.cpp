#include<bits/stdc++.h>
using namespace std ;

// Problem : Single Number II 
// Platform : Leetcode 

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        long long n = nums.size() ;
        long long count = 0 ; 
        vector<int>store ;
        for ( int i = 0 ; i < 32 ;  i ++ ) {
             int curr = 0 ;
             for ( int j = 0 ; j < n ; j ++ ) {
                 int x = ( ( nums [j] & ( 1 << i ) ) ) ;
                 if ( x != 0 )  {
                 curr ++ ;
                 }
             }
             if ( curr % 3 != 0 ) {
              store.push_back( 1 ) ;
             } else { 
              store.push_back( 0 ) ;
             }
        }
        long long ans = 0 ;
        long long pow = 1 ; 
        for ( int i= 0 ; i < store.size() ; i ++ ) {
            ans = ans + ( store[i] * pow ) ;
            pow = pow * 2 ;
        }
        return ans ;
    }
};
