#include<bits/stdc++.h>
using namespace std ;

// Problem : Power of Number
// Platform : Leetcode

class Solution {
  public:
    int solve( int n , int N ){
        if ( N == 0 ){
            return 1 ;
        }
        if( N % 2==0 ){
            return solve( n , N/2 )*solve( n , N/2 );
        }else {
            return n * solve( n , N/2 )*solve( n , N/2 );
        }
    }
    int reverseExponentiation(int n) {
        int curr = n;
        int N = 0;
        while(curr>0){
            int rem = curr%10 ;
            N = N*10 + rem ;
            curr = curr/10 ;
        }
        int ans = solve( n , N );
        cout<< ans << endl;
    }
};
