#include<bits/stdc++.h>
using namespace std ;

// Problem : Magical Sticks ( 1371A ) 
// Platform : Codeforces 

// --> Approach 1st 
// Simulating and calculating 
int main() {
              
    int t ;
    cin>>t ;
    while ( t -- ) {
      int n ; 
      cin>>n ;
      vector<int>store(n) ;
      for ( int i = 0 ; i < n ; i ++ ) {
          store[i] = ( i + 1 ) ;           
      }
      int l = 0 , r = n - 2 , count = 1 ;
      while ( l < r ) {
             count ++ ;
             l ++ ;
             r -- ;
      }
      cout<<count<<endl ;             
    }
    return 0 ;
}

// --> Approach 2nd 
// Only Calculating 

#include<bits/stdc++.h>
using namespace std ;
int main() {
              
    int t ;
    cin>>t ;
    while ( t -- ) {
      int n ; 
      cin>>n ;
      int count = 0 ;
      if ( n % 2 == 0 ) {
           count = ( n / 2 ) ;          
      }else {
           count = ( n / 2 ) + 1 ;         
      }
      cout<<count<<endl ;
    }
    return 0 ;
}
