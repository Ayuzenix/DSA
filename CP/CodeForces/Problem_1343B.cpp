#include<bits/stdc++.h>
using namespace std ;

// Problem : Balanced Array ( Problem 1343B ) 
// Platform : Codeforces 

int main() {
    int t ;
    cin>>t ;
    while ( t -- ){
       int n ;
       cin>>n ;
       if ( ( n / 2 ) % 2 != 0 ) {
           cout<<"NO"<<endl ;          
       }else {
           cout<<"YES"<<endl ;
           vector<int>store(n);
           int evensum = 0 , oddsum = 0 ;
           for ( int i = 0 ; i < n / 2 ; i ++ ) {
              if ( i == 0 ) {
                 store[i] = 2 ;
              }else {
                 store[i] = store[i-1] + 2 ;
              }
              evensum = evensum + store[i] ;
           }
           for (int i = n / 2 ; i < n - 1 ; i ++ ) {
              if ( i == n / 2 ) {
                store[i] = 1 ;
              }else {
                store[i] = store[i-1] + 2 ;
              }
              oddsum = oddsum + store[i] ;
           }
           store[n-1] = ( evensum - oddsum ) ;
           for ( int i = 0 ; i < n ; i ++ ) {
               cout<<store[i]<<" " ;
           }
           cout<<endl ;
       }
    }
    return 0 ;           
}
