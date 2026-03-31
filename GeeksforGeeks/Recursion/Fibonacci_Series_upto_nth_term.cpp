#include<bits/stdc++.h>
using namespace std;

// Problem : Fibonacci Series upto nth Term
// Platform : Leetcode 

class Solution {
  public:
    vector<int> Series(int n) {
       int maxi = 1e9 + 7 ;
       if ( n == 1 ) {
           return {0 , 1 } ;
       }
       int a = 0 ;
       int b = 1 ;
       vector <int> store ={ 0 , 1 } ;
       for (int i = 1 ; i <= n - 1 ; i ++ ) {
            int c = ( a + b ) % maxi ;
            a = b ;
            b = c ;
            store.push_back( c ) ;
       }
       return store ;
    }
};
