#include<bits/stdc++.h>
using namespace std ;

// Problem : Round 15 ( 702A ) 
// Platform : Codeforces 

int main() {
    
    int n ;
    cin>>n ;
    vector<int>store( n ) ;
    for ( int i = 0 ; i < n ; i ++ ) {
         cin>>store[i] ;       
    }
    int l = 0 , r = 0 , maxlen = 0 ;
    while ( r < n ) {
         if ( l < r &&  r < n && r > 0 && store[r]<=store[r-1] ) {
            l = r ;
         }
         maxlen = max ( maxlen , ( r - l + 1 ) ) ;
         r ++ ;

    }
    cout<<maxlen<<endl ;         
   return 0 ;            
}
