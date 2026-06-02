#include<bits/stdc++.h>
using namespace std ;

// Problem : Most Unstable Array ( Problem 1353A )  
// Platform : Codeforces 

int main() {
    int t ;
    cin>>t ;
    while ( t -- ) {
     int n , m ;
     cin>>n>>m ;
     if ( n == 1 ) {
         cout<<0<<endl ;          
     }else if ( n == 2 ){
         cout<<m<<endl ;             
     }else {
         cout<<2*m<<endl ;           
     }          
                  
    }
    return 0 ;
}
