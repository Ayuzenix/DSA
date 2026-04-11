#include<bits/stdc++.h>
using namespace std ;

// Problem : Round 103 ( Div.2) 
// Platform : Codeforces 


int main() {
      int n ; 
      cin>>n ;
      vector<int>store(n) ;
      for ( int i = 0 ; i < n ; i ++ ) {
           cin>>store[i] ;        
      }
      int maxi = INT_MIN ;
      int maxPos = -1 ;
      int mini = INT_MAX ; 
      int minPos = -1 ;
      for ( int i = 0 ; i < n ; i ++ ) {
           if ( store[i]>maxi) {
               maxi = store[i] ;
               maxPos = i ;
           }
           if ( store[i] <= mini ) {
               mini = store[i] ;
               minPos = i ;
           }
      }
      int x = n - 1 ;
      int result = 0 ;
      if ( minPos > maxPos ) {
          result = ( maxPos - 0 ) + ( x - minPos ) ;   
      }else if ( maxPos > minPos ) {
          result = ( maxPos - 0 ) + ( x - minPos - 1 ) ;  
      }
      cout<<result<<endl ; 
      return 0 ; 
}
