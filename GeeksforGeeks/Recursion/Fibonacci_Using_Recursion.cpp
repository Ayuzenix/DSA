#include<bits/stdc++.h>
using namespace std ;

// Problem : Fibonacci Using Recursion 
// Platform : Leetcode 

class Solution {
  public:
    int solve( int n ){
        if ( n == 0 ) {
             return 0 ;
        }
        if ( n== 1 ) {
             return 1 ;
        }
        int ans = solve ( n-2 ) + solve( n-1 ) ; 
        return ans ;
    }
    int nthFibonacci(int n) {
       
        int result = solve ( n ) ;
        return result ;
        
    }
};
