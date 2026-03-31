#include<stdio.h>
using namespace std;

// Problem : Recursive Sequence 
// Platform : GeeksforGeeks

// User function Template for C++

class Solution {
  public:
    
    void solve ( int n , long long & count , long long & till , long long & result , long long &maxi ) {
        if ( till > n ) {
            return ;
        }
        
        long long ans = 1 ;
        for ( int i = 0 ; i < till ; i ++ ) {
             ans = ( ans * count ) % maxi ;
             count ++ ;
        }
        till ++ ;
        result = result + ans  ;
        result = result % maxi ;
        solve ( n , count , till , result , maxi ) ;
    }
  
    long long sequence(int n) {
        
        long long count = 1 ;
        long long till = 1 ;
        long long result = 0 ;
        long long maxi = 1e9 + 7 ;
        solve ( n , count , till , result , maxi ) ;
        return result ;
    }
};
