#include<bits/stdc++.h>
using namespace std ;

// Problem : Young Physicist ( 69A ) 
// Platform : Codeforces 

int main() {
    
    long long n ;
    cin>>n ;
    long long xd = 0 , yd = 0 , zd = 0 ;
    while ( n -- ) {
      long long  x , y , z ;
      cin>>x>>y>>z ;
      xd = xd + x ;
      yd = yd + y ;
      zd = zd + z ;
    }
    if ( ( xd == yd ) && ( yd == zd ) && ( xd == 0 ) ) {
       cout<<"YES"<<endl ;          
    }else {
       cout<<"NO"<<endl ;           
    }      

    return 0 ;           
}
